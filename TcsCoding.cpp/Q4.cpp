// Q) Write a program to find out and display prime numbers from the given list of integers. The program will accept input in two lines. First-line contains a number indicating the total number of integers in the list and the second line contains integers separated by

// spaces.

// Example 1

// Input: 5

// 46937

// Output: 37

// Example 2

// Input: 10

// 8 10 3 12 7 15 11 2 17 26

// . Output: 37 11 2 17




#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag++;
            }
        }
        if(flag==2)
        {
            cout<<arr[i]<<" ";
        }
        flag=0;
    }
}