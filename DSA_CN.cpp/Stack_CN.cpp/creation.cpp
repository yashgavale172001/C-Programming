#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<sp->arr[sp->top]<<" is poped from stack"<<endl;
        int temp= sp->arr[sp->top];
        (sp->top)--;
        //delete temp;
        
    }
}
void push( struct stack *sp,int data)
{
    if(isFull(sp))
    {
        cout<<" Stack is full"<<endl;
    }
    else{
        (sp->top)++;
        sp->arr[sp->top]=data;
        cout<<sp->arr[sp->top]<<" is push into the stack"<<endl;
    }
}
int main()
{
    struct stack *sp=new stack;
    sp->top=-1;
    sp->size=5;
    sp->arr=new int[sp->size];
    
    push(sp,10);
    push(sp,11);
    push(sp,12);
    push(sp,13);

    pop(sp);
    pop(sp);
    pop(sp);


}