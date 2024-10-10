#include<iostream>
using namespace std;
int sorting(int arr[],int size)
{
    int loops=1;
    while(loops<size)
    {
        for(int i=0;i<size-loops;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        loops++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    return 0;

}

int main()
{
   int arr[5]={10,44,38,13,16}; 
   int size=5;
    sorting(arr,size);

}