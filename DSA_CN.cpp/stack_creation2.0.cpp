#include<iostream>
using namespace std;
struct stack
{
  int size;
  int top;
  int *arr;
};
int pop(struct stack *sp)
{
    if(sp->top==-1)
    {
        cout<<"Cannot pop bacause stack is empty"<<endl;
    }
    else{
        int temp=sp->arr[sp->top];
        sp->top--;
        cout<<"Element "<<temp<<" is popped from the stack"<<endl;
    }
}
int push(struct stack *sp,int val)
{
    if(sp->top==sp->size-1)
    {
        cout<<"stack overflow! cannot push element "<<val<<endl;
    }
    else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
int main()
{
    struct stack *s1=new stack;
    cout<<"Enter the size of an array "<<endl;
    cin>>s1->size;
    s1->top==-1;
    s1->arr=new int[s1->size];
    int num;
    int c;
    do
    {
        cout<<"Enter the choice"<<endl;
       cin>>c;
       switch(c)
       {
             case 1:
                   {
                    cout<<"Enter the number you want to push in stack"<<endl;
                    cin>>num;
                    push(s1,num);
                    break;
                   } 
             case 2:
                   {
                    pop(s1);
                    break;
                   }
             case 3:
                   {
                     cout<<"Exit"<<endl;
                     break;
                   }
       }
           
    } while (c<=3);
    
}