#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *sp)
{
   if((sp->top )==(sp->size-1))
   {
      return 1;
   }
   else{
    return 0;
   }
}
int isempty(struct stack *sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int pop(struct stack *sp)
{
    if(isempty(sp))
    {
        cout<<" stack is empty "<<endl;
    }
    else{
        int temp=sp->arr[sp->top];
        (sp->top)--;
        return temp;
    }
}
void  push(struct stack *sp,int val)
{
   if(isfull(sp))
   {
     cout<<"stack is overflow! cannot push "<<val<<" to the stack"<<endl;
   }
   else
   {
    (sp->top)++;
    sp->arr[sp->top]=val;
    //cout<<"+"<<endl;
   }
}
int main()
{
   struct stack *sp=new stack;
   sp->size=10;
   sp->top=-1;
   sp->arr=new int[sp->size];
   //cout<<isfull(sp)<<endl;
   //cout<<isempty(sp)<<endl;
   push(sp,23);
   push(sp,89);
   push(sp,12);
   push(sp,65);
   //cout<<sp->arr[1];
   cout<<"popped element is" <<pop(sp)<<endl;
   cout<<"popped element is" <<pop(sp)<<endl;
   cout<<"popped element is" <<pop(sp)<<endl;
   //cout<<isfull(sp)<<endl;
   //cout<<isempty(sp)<<endl;
}