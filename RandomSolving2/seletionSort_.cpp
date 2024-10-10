#include<iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size] = {3, 6, 3, 9, 8, 5};

    //    for(int i=0;i<size;i++){
    //    cin>>arr[i];
    // }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}
