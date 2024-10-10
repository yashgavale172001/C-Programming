#include<iostream>
using namespace std;
class Node
{
   public:
   int data;
   Node *next;
   Node(int dat)
   {
     this->data=dat;
     this->next=NULL;
   }
};
void insert(Node *&head,int data)
{
  Node *newNode=new Node(data);
    if(head==NULL)
    {
         head=newNode;
    }
    else{
      Node *current=head;
      while(current->next!=NULL)
      {
        current=current->next;
      }
      current->next=newNode;
    }
}
void printLL(Node *head)
{
  Node *crr=head;
  while(crr!=NULL)
  {
    cout<<crr->data<<" ";
    crr=crr->next;
  }
}
int main()
{
  Node *head=NULL;
    char x;
    int dat;
    do
    {
        cout<<"Enter the data"<<endl;
        cin>>dat;
        //Node n=new Node(data);
        insert(head,dat);
        cout<<"Enter y to add data or n "<<endl;
        cin>>x;
    } while(x=='y' || x=='Y');

    cout<<"Print Link list"<<endl;
    printLL(head);
    
}
