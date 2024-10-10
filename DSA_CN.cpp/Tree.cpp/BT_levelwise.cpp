#include<iostream>
using namespace std;
#include<queue>
template<typename T>
class BinaryTree
{
    public:
    int data;
    BinaryTree<int>*left;
    BinaryTree<int>*right;

    BinaryTree(T data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
BinaryTree<int>*takeinput()
{
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    BinaryTree<int>*root=new BinaryTree<int>(rootdata);
    queue<BinaryTree<int>*>queue;
    queue.push(root);
    while(queue.size()!=0)
    {
        BinaryTree<int>*front=queue.front();
        queue.pop();
        
            int leftdata;
            cout<<"Enter left child of "<<front->data<<endl;
            cin>>leftdata;
            if(leftdata!=-1)
            {
                BinaryTree<int>*child=new BinaryTree<int>(leftdata);
                front->left=child;
                queue.push(child);
            }
            else{
                BinaryTree<int>*child=new BinaryTree<int>(leftdata);
                //front->left->data=-1;
            }
            int rightdata;
            cout<<"Enter right child of "<<front->data<<endl;
            cin>>rightdata;
            if(rightdata!=-1)
            {
                BinaryTree<int>*child=new BinaryTree<int>(rightdata);
                front->right=child;
                queue.push(child);
            }
            else{
                BinaryTree<int>*child=new BinaryTree<int>(leftdata);
                //front->left->data=-1;
            }
    }
    return root;
}
void printlevelwise(BinaryTree<int>*root)
{
    queue<BinaryTree<int>*>queue;
    queue.push(root);
    while(queue.size()!=0)
    {
        BinaryTree<int>*front=queue.front();
        cout<<front->data<<":";
        queue.pop();
        if(front->left->data!=-1)
        {
            cout<<"L"<<front->left->data<<" ";
            queue.push(front->left);
        }
        if(front->right->data!=-1)
        {
            cout<<"R"<<front->right->data<<" ";
            queue.push(front->right);
        }
        cout<<endl;
    }
    
}
 int main()
 {
    BinaryTree<int>*root=takeinput();
    printlevelwise(root);
 }