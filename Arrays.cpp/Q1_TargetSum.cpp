
//Q1 find the total numbers of pairs int an array ehose sum isequal to the given value of x
#include<iostream>
using namespace std;
int main()
{
    int *arr=new int[5];
    int x;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum "<<endl;
    cin>>x;
   int count=0;
    for(int i=0;i<5;i++)
    {
        
        for(int j=i+1;j<5;j++)
        {
           if(arr[i]+arr[j]==x)
           count++;
        }
    }
    cout<<"Pairs in array are "<<count<<endl;

}