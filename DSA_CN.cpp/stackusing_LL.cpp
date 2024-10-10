#include<iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
struct Node *top=NULL;
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isFULL()
{
    struct Node *n=new Node; 
    if(n==NULL) // if ram dont have memory to allocate to n then it is null, 
    {           // and in rare condion memory is not allocated ,in this code it will rarerly satisfy if condition
       return 1;
    }
    return 0;
}
void push(int x)
{
    if(isFULL())
    {
        cout<<" stack is full"<<endl;
    }
    else
    {
       struct Node *n=new Node;
       n->data=x;
       n->next=top;
       top=n;
       
    }
}
void pop()
{
    if(isEmpty())
    {
       cout<<"Stack is empty"<<endl;
    }
    else
    {
        struct Node *temp=top;
        top=top->next;
        delete temp;
    }
}
void LLtraversal()
{
   while(top)
   {
     cout<<top->data<<endl;
     top=top->next;
   }

}
int main()
{
   push(3);
   push(23);
   push(43);
   push(44);
   pop();
   pop();
   pop();
   LLtraversal();
}


