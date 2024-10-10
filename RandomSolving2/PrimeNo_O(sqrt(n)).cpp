#include<iostream>
using namespace std;
bool isPrime(int n)
{
	// Write your code here.
	int count=0;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			if(i!=n/i)
			{
				count++;
			}
		}
	}
	if(count==2)
	return 1;
	else return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n);
}