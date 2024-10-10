#include<iostream>
using namespace std;
int main()
{
    int *arr=new  int[7];
    
    cout<<"Enter the array "<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<7;i++)
    {
        int unique=0;
        for(int j=0;j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                unique++;
            }
        }
        if(unique==1)
        {
            cout<<"Unique element is "<<arr[i];
        }
    }
}