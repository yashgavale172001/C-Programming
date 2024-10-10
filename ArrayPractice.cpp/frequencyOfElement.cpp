#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 5, 2, 6, 10, 2, 2, 5};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != -1)
        {
            int a = arr[i];
            int b=0;
            for (int j = i; j < sizeof(arr) / sizeof(int); j++)
            {
                if (a == arr[j] )
                {
                    arr[j] = -1;
                    b++;
                }
            }
            cout<<a<<" Has repeated by "<<b<<" Times "<<endl;
        }
    }
}