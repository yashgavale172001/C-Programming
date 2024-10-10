#include<iostream>
using namespace std;
class Node{
    public:
  char data;
  Node *next;
  Node(int data)
  {
    this->data=data;
    this->next=NULL;
  }
};
Node *top=NULL;
int isFull()
{  
   return 0;

}
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(char data)
{
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
    }
    else{
        Node *Newnode=new Node(data);
        Newnode->next=top;
        top=Newnode;
    }
}
void pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty "<<endl;
    }
    else{
        Node *temp=top;
       top=top->next;
       delete temp;
    }
}
int isParanthesis(char *arr)
{
    for(int i=0;i<=arr[i]!='\0';i++)
    {
       if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
       {
         push(arr[i]);
       }   
       else if(arr[i]==')' || arr[i]=='}' || arr[i]==']')
       {
        if(isEmpty())
        {
            return 0;
        }
         pop();
       }
    }
    if(isEmpty())
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char arr[]="(a+b)-(b+c)";
    if(isParanthesis(arr))
    {
        cout<<"Paranthesis is correct"<<endl;
    }
    else{
        cout<<"Paranthesis is not correct"<<endl;
    }
}