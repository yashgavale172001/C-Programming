#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    public:
    node *front = NULL;
    node *back = NULL;

    void push(int val)
    {
        node *newnode = new node(val);

        if (front == NULL)
        {
            front = newnode;
            back = newnode;
        }
        else
        {
            back->next = newnode;
            back = newnode;
        }
        cout<<back->data<<" is push into the queue"<<endl;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "queue is empty " << endl;
        }
        else
        {
            node *temp = front;
            cout<<front->data<<" is popped from queue"<<endl;
            front = front->next;
            delete temp;
        }
    }
    void pick()
    {
        cout<<"Pick of queue is "<<front->data<<endl;

    }
    void isEmpty()
    {
        if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue is not empty"<<endl;
        }
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.pick();
    q.pop();

    q.isEmpty();
}