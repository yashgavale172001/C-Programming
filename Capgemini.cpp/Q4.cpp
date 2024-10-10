
// Problem Statement –

// A function is there which tells how many dealerships there are and the total number of cars in each dealership.

// Your job is to calculate how many tyres would be there in each dealership.

 

// Input

// 3 

// 4 2

// 4 0

// 1 2

// Output

// 20

// 16

// 8

 

// There are total 3 dealerships

// dealerships1 contains 4 cars and 2 bikes

// dealerships2 contains 4 cars and 0 bikes

// dealerships3 contains 1 cars and 2 bikes
#include<iostream>
using namespace std;
int main()
{
    int cars,bikes,n;
    cout<<"Enter the number of dealerships "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>cars>>bikes;
        cout<<"In dealership "<<i+1<<" cars "<<cars<<" And Bikes "<<bikes<<" having tyres "<<cars*4+bikes*2<<endl;
    }
}