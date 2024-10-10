#include<iostream>
using namespace std;
struct Node
{
    char data;
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
    return 0;  //no one knows size of link list
}
void push(char arr)
{
   if(isFULL())
   {
     cout<<"Stack is full"<<endl;
   }
   else 
   {
     struct Node *n=new Node;
     n->data=arr;
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
    else{
        struct Node *temp=top;
        top=top->next;
        delete temp;
    }
}
int paranthesis(char *arr)
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='(')
        {
            push(arr[i]);
        }
        else if(arr[i]==')')
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
    char *arr =  "(a+b)-(a-b)";
    if(paranthesis(arr))
    {
        cout<<"paranthesis is correct"<<endl; 
    }
    else
    {
        cout<<"parenthesis is not correct"<<endl;
    }
}


/**
#include<iostream>
using namespace std;
struct Node
{
    char data;
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
int isFull()
{
    return 0;
}
void push(char a)
{
    if(isFull())
    {
        cout<<"Stack is full "<<endl;
    }
    else
    {
       struct Node *n=new Node;
       n->data=a;
       n->next=top;
       top=n;
    }
}
int pop()
{
    if(isEmpty())
    {
        // cout<<"stack is empty "<<endl;
        return 1;
    }
    else{
        struct Node *temp=top;
        top=top->next;
        delete temp;
        return 0;
    }
}
int paranthesis(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
        {
            push(arr[i]);
        }
        else if(arr[i]==')' || arr[i] =='}' || arr[i]==']')
        {
           if(pop())
           {
             return 0;
           }
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
    char arr[]="[(10+1){12*2}][";
    if(paranthesis(arr))
    {
        cout<<"correct paranthesis "<<endl;
    }
    else{
        cout<<" paranthesis is wrong "<<endl;
    }
}*/
