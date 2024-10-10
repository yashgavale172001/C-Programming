#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(Node *head, int arr[6])
{
    static int i = 0;
    if (head == NULL)
    {
        return;
    }
    reverse(head->next, arr);
    arr[i++] = head->data;
    //cout<<arr[i-1]<<" ";    to check every step
}
void straight(Node *head, int arr1[6])
{
    static int j = 0;
    if (head == NULL)
    {
        return;
    }
    arr1[j++] = head->data;
    //cout<<arr1[j-1]<<" ";    to check every step
    straight(head->next, arr1);
}
int isPalindrome(Node *head, int *arr, int *arr1)
{
     int flag = 0;
    for (int y = 0; y <= 5; y++)
    {
        if (arr[y] != arr1[y])
        {
            flag = 1;
            // return flag;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void palindrome(Node *&head, int *arr, int *arr1)
{
    reverse(head, arr);
    straight(head, arr1);
    if (isPalindrome(head, arr, arr1))
    {
        cout << "its palindrome";
    }
    else
    {
        cout << "Its not palindrome";
    }
}
void insert(Node *&head, int data)
{
    Node *newnode = new Node(data);
    Node *crr = head;
    if (crr == NULL)
    {
        head = newnode;
    }
    else
    {

        while (crr->next != NULL)
        {
            crr = crr->next;
        }
        crr->next = newnode;
    }
}
int main()
{
    static int arr[6], arr1[6];
    int num;
    Node *head = NULL;
    char ch;
    do
    {
        cout << "Enter the data " << endl;
        cin >> num;
        insert(head, num);
        cout << "Enter the choice y or n" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    print(head);
    palindrome(head, arr, arr1);
}