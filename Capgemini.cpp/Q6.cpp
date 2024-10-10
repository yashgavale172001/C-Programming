#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"Enter the number of elements in an aray "<<endl;
    cin>>n;
    cout<<"Enter of iterations "<<endl;
    cin>>d;
    int arr[n];
    int s=n-d;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr1[n],l=0;
    for(int i=s;i<n;i++)
    {
        arr1[l++]=arr[i];
    }
    for(int i=0;i<s;i++)
    {
        arr1[l++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    

}