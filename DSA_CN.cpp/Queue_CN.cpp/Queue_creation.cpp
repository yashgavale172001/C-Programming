#include<iostream>
using namespace std;
struct Queue
{
    int size;
    int f;
    int b;
    int *arr;
};

int isEmpty(struct Queue *p)
{
   if(p->f==p->b)
   {
     return 1;
   }
   return 0;
}
int  isFull(struct Queue *p)
{
   if(p->f==p->size-1)
   {
     return 1;
   }
   return 0;
}
void enqueue( struct Queue *p,int val)
{
   if(isFull(p))
   {
      cout<<"stack is full"<<endl;
   }
   else{
     p->f++;
     p->arr[p->f]=val;
     cout<<"value "<<p->arr[p->f]<<" is added in the queue "<<endl;
   }
}

int dequeue(struct Queue *p)
{
    if(isEmpty(p))
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        p->b++;
        cout<<p->arr[p->b]<<" is deleted from the queue"<<endl;
    }
}

int main()
{
    struct Queue p;
    p.f=p.b=-1;
    p.size=3;
    p.arr=new int[p.size];
    enqueue(&p,10);
    enqueue(&p,100);
    enqueue(&p,10000);
    enqueue(&p,10000);
    dequeue(&p);
    dequeue(&p);
    dequeue(&p);
    //dequeue(&p);
}
