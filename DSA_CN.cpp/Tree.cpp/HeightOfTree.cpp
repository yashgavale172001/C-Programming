#include<iostream>
using namespace std;
#include<queue>
#include<vector>
template<typename T>
class TreeNode
{
    public:
    int data;
    vector<TreeNode<int>*>children;

    TreeNode(T data)
    {
        this->data=data;
    }
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
TreeNode<int>*TakeInput()
{
    int rootdata;
    cout<<"Enter rootdata"<<endl;
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*>queue;
    queue.push(root);

    while(queue.size()!=0)
    {
        TreeNode<int>*front=queue.front();
        queue.pop();
        int numchild;
        cout<<"Enter number of child of "<<front->data<<endl;
        cin>>numchild;
        for(int i=0;i<numchild;i++)
        {
            int childdata;
            cout<<i+1<<" th child of "<<front->data<<endl;
            cin>>childdata;
            TreeNode<int>*child=new TreeNode<int>(childdata);
            front->children.push_back(child);
            queue.push(child);
            
        }
    }
    return root;
}
int getHeight(TreeNode<int>* root) 
{
    // Write your code here
    if(root==NULL)
    {
        return 0;
    }
    int h=1;
    queue<TreeNode<int>*>queue;
    queue.push(root);
    while(queue.size()!=0)
    {
        TreeNode<int>*front=queue.front();
        queue.pop();
        for(int i=0;i<front->children.size();i++)
        {
            queue.push(front->children[i]);
            if(i==front->children.size()-1)
            {
               h++;
            }
        }
    }
    return h;
}
int main() {
    TreeNode<int>* root = TakeInput();
    cout << getHeight(root);
}