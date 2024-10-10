#include<iostream>
using namespace std;
template<typename T>
class BinaryTree
{
      public:
      int data;
      BinaryTree*left;
      BinaryTree*right;

      BinaryTree(T data)
      {
        this->data=data;
        left=NULL;
        right=NULL;
      }
      ~BinaryTree()
      {
        delete left;
        delete right;
      }

};
void printtree(BinaryTree<int>*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL)
    {
        cout<<" R"<<root->right->data;
    }
    cout<<endl;
    printtree(root->left);
    printtree(root->right);


}
BinaryTree<int>* takeinput()
{
    int rootdata;
    cout<<"Enter root data "<<endl;
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    BinaryTree<int>*root=new BinaryTree<int>(rootdata);
    BinaryTree<int>*leftchild=takeinput();
    BinaryTree<int>*rightchild=takeinput();
    root->left=leftchild;
    root->right=rightchild;
    return root;


}

int main()
{
    BinaryTree<int>*root=takeinput();
    printtree(root);
}