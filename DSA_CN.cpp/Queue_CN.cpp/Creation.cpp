#include<iostream>
using namespace std;
#include<queue>
struct Queue
{
    int size;
    int f;
    int b;
    int *arr;
};
int isFull(struct Queue *q)
{
   if(q->b==q->size-1)
   {
    return 1;
   }
   return 0;
}
int isEmpty(struct Queue *q)
{
    if((q->f==-1) || q->f > q->b)
    {
        return 1;
    }
    return 0;
}
void enQueue(struct Queue *q,int a)
{
  if(isFull(q))
  {
    cout<<"queue is full "<<endl;
  }
  else{
    q->b++;
    q->arr[q->b]=a;
    cout<<q->arr[q->b]<<" is added in the queue"<<endl;
  }
  if(q->f==-1)
  {
    q->f++;
  }

}
void deQueue(struct Queue *q)
{
  if(isEmpty(q))
  {
    cout<<"queue is empty "<<endl;
  }
  else{
    int a=q->arr[q->f];
    q->f++;
    cout<<a<<" is deQueued "<<endl;
  }

}
int main()
{
   struct Queue *q=new Queue;
   q->f=-1;
   q->b=-1;
   q->size=10;
   q->arr=new int[q->size];
   enQueue(q,10);
   enQueue(q,11);
   enQueue(q,12);
   enQueue(q,13);
   enQueue(q,14);
   deQueue(q);
   deQueue(q);
   deQueue(q);
   deQueue(q);
   deQueue(q);
   deQueue(q);

}