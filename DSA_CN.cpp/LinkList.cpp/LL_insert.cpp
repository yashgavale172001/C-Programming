#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};
void insertLL(Node *&head, int data)
{
    Node *NewNode = new Node(data);
    if (head == NULL)
    {
        head = NewNode;
    }
    else
    {
        Node *current = head;
        while (current->Next != NULL)
        {
            current = current->Next;
        }
        current->Next = NewNode;
    }
}
InsertNode(Node *&head, int pos)
{
    int p = pos;
    int n;
    cout << "Enter the data" << endl;
    cin >> n;
    Node *NewNode = new Node(n);
    Node *temp = head;
    if (pos >= 2)
    {

        while (p >= 2)
        {
            temp = temp->Next;
            p--;
            if (p == 2)
            {
                Node *temp1 = temp->Next;
                temp->Next = NewNode;
                NewNode->Next = temp1;
            }
        }
    }
    else{
        Node *temp2=head;
        // while(temp2->Next!=NULL)
        // {
        //     temp2=temp2->Next;
        // }
        NewNode->Next=head;
        head=NewNode;

    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
}
int main()
{
    Node *head = NULL;
    int num, pos;
    char ch;
    do
    {
        cout << "Enter the Data " << endl;
        cin >> num;
        insertLL(head, num);
        cout << "Y or N " << endl;
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');

    print(head);
    cout << "at which position you want to insert the node" << endl;
    cin >> pos;
    InsertNode(head, pos);

    cout << "Print the linklist" << endl;
    print(head);
}