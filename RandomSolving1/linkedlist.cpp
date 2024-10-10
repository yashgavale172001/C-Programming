#include <iostream>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node()
//     {
//         next = NULL;
//     }
// };

// class linkedList
// {
// public:
//     node *head;
//     linkedList(int size)
//     {
//         node *temp = new node();
//         int d;
//         for (int i = 0; i < size; i++)
//         {
//             cout << "Enter data for node " << i + 1 << " : ";
//             cin >> d;
//             temp->data = d;
//             temp->next = new node();
//             if (i == 0)
//             {
//                 head = temp;
//             }
//             temp = temp->next;
//         }
//     }

// //     void display()
// //     {
// //         node *temp = head;
// //         while(temp->next != NULL)
// //         {
// //             cout << temp->data << endl;
// //             temp = temp->next;
// //         }
// //     }
// // };

// int main()
// {
//     node *one = new node();
//     node *two = new node();
//     node *three = new node();

//     one->data = 4;
//     two->data = 5;
//     three->data = 6;

//     one->next = two;
//     two->next = three;
//     three->next = NULL;

//     node *head = one;
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }

//     cout << endl;
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }

// }

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *one = new node;
    struct node *two = new node;
    struct node *three = new node;

    one->data = 4;
    two->data = 5;
    three->data = 6;

    one->next = two;
    two->next = three;
    three->next = NULL;

    struct node *head = one;
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}