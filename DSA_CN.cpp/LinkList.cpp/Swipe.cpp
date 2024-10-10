#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insert(Node*& head,int data)
{
    Node *Newnode=new Node(data);
    Node*temp=head;
    if(temp==NULL)
    {
       head=Newnode;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Newnode;
    }
}
void print(Node*head)
{
    Node*crr=head;
    while(head)
    {
        cout<<crr->data<<" ";
        crr=crr->next;
    }
    //cout<<endl;
}
void swipe(Node*&head)
{
    int a,b;
    cout<<"Which Nodes you want to swipe "<<endl;
    cin>>a>>b;
    int x=1;
    Node *temp=head;
    Node*one=NULL;
    Node*one1=NULL;
    Node*two1=NULL;
    Node*two=NULL;
    Node*temp1=NULL;
    while(temp->next!=NULL)
    {
        if(x==a-1)
        {
           temp1=temp;
           one=temp->next;
           one1=temp->next->next;
        }
        if(x==b-1)
        { 
            two=temp->next;
            two1=temp->next->next;

            temp1->next=temp;
            temp->next=one1;

            temp->next=one;
            one->next=two1;

           
        }
        temp=temp->next;
        x++;
    }
}
int main()
{
   int data;
   char ch;
   Node*head=NULL;
   do{
    cout<<"Enter the data "<<endl;
    cin>>data;
    insert(head,data);
    cout<<"Enter the choice Y or N "<<endl;
    cin>>ch;
   }while(ch=='y' || ch=='y');
   print(head);
   swipe(head);
   print(head);
}