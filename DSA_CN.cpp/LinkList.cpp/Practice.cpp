// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node(int data)
//     {
//         this->data=data;
//         this-> next=NULL;

//     }
// };
// int main()
// {
//     int data;
//     cout<<"Enter the data"<<endl;
//     cin>>data;
//     Node* head=NULL;
//     Node* temp;
//     while(data!=-1)
//     {
//         Node *newnode=new Node(data);
//         if(head==NULL)
//         {
//             head=newnode;
//             temp=newnode;
//         }
//         else{
//            // Node *temp=head;
//             // while(temp->next!=NULL)
//             // {
//             //     temp=temp->next;
//             // }
//             temp->next=newnode;
//             temp=temp->next;
//         }
//         cin>>data;
//     }
//     while(head!=NULL)
//     {
//         cout<<head->data<<" "<<endl;
//         head=head->next;
//     }

// }



#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

Node* Takeinput()
{
    int data;
    cout<<"Enter the data";
    Node* head=NULL;
    Node*temp;

    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
        cin>>data;
    }
    return head;
};
/*Node* deletenode(Node* head)
{
    int node;
    cout<<"Which Node do you want to delete"<<endl;
    cin>>node;
    //int count=0;
    Node* temp=head;
    if(head==NULL || head->next==NULL)
    {
        cout<<"Node deleted";
    }
    else
    {
        int t=1;
        while(temp->next!=NULL)
        {
            if( node-1==t)
            {
                temp->next=temp->next->next;
                //delete temp;
            }
            temp=temp->next;
            t++;
        }
    }
    return head;

};*/
void print(Node* head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node* head=Takeinput();
   // Node* head2=deletenode(head);
    print(head);
    
}