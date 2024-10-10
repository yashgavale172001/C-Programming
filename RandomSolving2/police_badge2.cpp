#include<iostream>
using namespace std;
int main()
{
	int n,sum1=0,sum2=0,min;
	cin>>n;
	int arr[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	for(int j=0;j<n;j++)
	{
       sum1=sum1+arr[j];
	   if(arr[j]<=min)
	   {
		min=arr[j];
	   }
	}
	//cout<<"min "<<min<<endl;
	//cout<<sum1<<endl;
	int t=min;
	for(int i=0;i<n;i++)
	{
		arr2[i]=t;
		t++;
	}
	for(int i=0;i<n;i++)
	{
		sum2=arr2[i]+sum2;
	}
	//cout<<sum2<<endl;
    cout<<sum2-sum1;
}
