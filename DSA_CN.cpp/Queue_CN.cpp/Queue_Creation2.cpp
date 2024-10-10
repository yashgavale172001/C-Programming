#include<iostream>
using namespace std;
#include<array>
struct Cqueue
{
    int f;
    int size;
    int r;
    int *arr;
};
int isEmpty(struct Cqueue *p)
{
    if(p->f==p->r)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Cqueue *p)
{
    if((p->r+1)%p->size==p->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Cqueue *p,int val)
{
    if(isFull(p))
    {
        cout<<"queue is full "<<endl;
    }
    else if(p->f==-1 && p->r==-1)
    {
        p->f=p->r=0;
        p->arr[p->r]=val;
        cout<<p->arr[p->r]<<"is added in the queue"<<endl;
    }
    else{
        p->r=(p->r+1)%p->size;
        p->arr[p->r]=val;
        cout<<p->arr[p->r]<<"is added in the queue"<<endl;
    }

}
void dequeue(struct Cqueue *p)
{
    if(isEmpty(p))
    {
        cout<<"queue is empty"<<endl;
    }
    else if(p->f==p->r)
    {
        cout<<p->arr[p->f]<<"is deleted "<<endl;
        p->f=p->r=-1;
    }
    else{
        cout<<p->arr[p->f]<<" is deleted "<<endl;
        p->f=(p->f+1)%p->size;
    }
    
}
int main()
{
    struct Cqueue p;
    p.size=5;
    p.f=p.r=-1;
    p.arr=new int[p.size];
    enqueue(&p,10);
    enqueue(&p,11);
    enqueue(&p,12);
    enqueue(&p,13);
    enqueue(&p,14);
    dequeue(&p);
    dequeue(&p);
    dequeue(&p);
    /*int l=sizeof(p.arr)/sizeof(int);
    for(int i=0;i<l;i++)
    {
        cout<<p.arr[i]<<" ";
    }
}















































/*#include<stdio.h>
#include<stdlib.h>
 
struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int isEmpty(struct circularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct circularQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
 
void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}
 
 
int main(){
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    enqueue(&q, 1);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}*/
