#include<iostream>
using namespace std;
int display(int arr[],int size,int number)
{
   int low=0;
   int high=size-1;
   
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==number)
        {
            return mid;
        }
        if(arr[mid]<number)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
     return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int number=7;
    
    int result =display(arr,size,number);
    cout<<"element found at index "<<result<<endl;


}