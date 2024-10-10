#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Sorting an array using bubble sort"<<endl;

    /*for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }*/
     sort(arr,arr+n);


    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"After sortinging an array"<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
           cout<<"Second Smallest Element in and array is "<<arr[i+1]<<endl;
           break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>arr[i-1])
        {
           cout<<"Second Largest Element in and array is "<<arr[i-1]<<endl;
           break;
        }
    }
    
    //cout<<"Second largest element in an aray is "<<arr[n-2];

}


//2nd option better solution without sorting an array
/*
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}

*/