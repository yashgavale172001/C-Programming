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
void insert(Node *&head, int data)
{
    Node *NewNode = new Node(data);
    if (head == NULL)
    {
        head = NewNode;
    }
    else
    {
        Node *temp = head;
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = NewNode;
    }
}
void print(Node *head)
{
    Node *temp2 = head;
    while (temp2)
    {
        cout << temp2->data << " ";
        temp2 = temp2->Next;
    }
    cout << endl;
}
void DeleteNode(Node *&head)
{
    int n;
    cout << "Which Node you want to delete" << endl;
    cin >> n;

    Node *temp = head;
    if (n == 1)
    {
        Node *crr = temp;
        // temp = temp->Next;
        head = head->Next;
        delete[] crr;
        // head=temp;
        // return;
    }
    else
    {

        while (n >= 2)
        {
            if (n == 2)
            {
                if (temp->Next->Next == NULL)
                {

                    cout << "Data deleting you are ";
                    cout << temp->Next->data << endl;
                    temp->Next=NULL;
                    Node *crr = temp->Next;
                    delete[] crr;
                    //return;
                }
                else
                {

                    cout << "Data deleting you are ";
                    cout << temp->Next->data << endl;
                    Node *crr = temp->Next;
                    temp->Next = temp->Next->Next;
                    delete[] crr;
                    return;
                }
            }
            n--;
            temp = temp->Next;
        }
    }
}
int main()
{
    int data;
    char ch;
    Node *head = NULL;
    do
    {
        cout << "Enter the data" << endl;
        cin >> data;
        insert(head, data);
        cout << "Yes y or NO n" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    print(head);
    DeleteNode(head);
    print(head);
}