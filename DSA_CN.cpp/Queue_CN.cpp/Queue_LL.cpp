#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *f=NULL;
struct Node *r=NULL;
void traversal(struct Node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int isEmpty()
{
    if(f==NULL && r==NULL)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    return 0;
}
void enqueue(int val)
{
    if(isFull())
    {
        cout<<"queue is full"<<endl;
    }
    else {
        struct Node *n=new Node;
        n->data=val;
        n->next=NULL;
        if(r==NULL && f==NULL)
        {
           r=f=n;
           cout<<r->data<<" is added in the queue"<<endl;
        }
        else{
            r->next=n;
            r=r->next;
            cout<<r->data<<" is added in the queue"<<endl;
        }
    }
}
void dequeue()
{
    if(isEmpty())
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        if(r==f)
        {
            cout<<f->data<<" is deleted from the queue"<<endl;
            r=f=NULL;
        }
        else{
            struct Node *temp=new Node;
            cout<<f->data<<" is deleted from the queue"<<endl;
            temp=f;
            f=f->next;
            delete temp;
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    dequeue();
    dequeue();
    traversal(f);
}