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
void printlevelwise(TreeNode<int>*root)
{
   if(root==NULL)
   {
     return;
   }

   queue<TreeNode<int>*>queue;
   queue.push(root);
   while(queue.size()!=0)
   {
     TreeNode<int>*front=queue.front();
     queue.pop();
     cout<<front->data<<":";
     for(int i=0;i<front->children.size();i++)
     {
        queue.push(front->children[i]);
        if(i==front->children.size()-1)
        {
           cout<<front->children[i]->data;
        }
        else{
            cout<<front->children[i]->data<<",";
        }
     }
     cout<<endl;
   }
}
int main()
{
    TreeNode<int>*root=TakeInput();
    printlevelwise(root);
}
/*void printLevelWise(TreeNode<int>* root) 
{
    if(root==NULL)
    {
        return;
    }

    queue<TreeNode<int>*>queue;
    queue.push(root);

    while(queue.size()!=0)
    {
        TreeNode<int>*front=queue.front();
        queue.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++)
        {
            queue.push(front->children[i]);
            if(i==front->children.size()-1)
            {
                cout<<front->children[i]->data;
            }
            else{
                  cout<<front->children[i]->data<<",";
            }
        }
        cout<<endl;
    }
}*/