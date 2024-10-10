// #include<iostream>
// using namespace std;
// void array(int p[5],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cin>>p[i];
//     } 
// }
// int arraysum(int q[5],int n)
// {
//   int sum=0;
//   for(int i=0;i<n;i++)
//   {
//     sum=sum+q[i];
//   }
//   return sum;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the size of array "<<endl;
//     cin>>n;
//     int a[5];
//     cout<<"Enter the elements in array "<<endl;
//     array(a,n);
//     int sum=arraysum(a,n);
//     cout<<"sum of elements in array are "<<sum;

// }


#include<iostream>
using namespace std;
void array(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>*p;
        p++;
    } 
}
int arraysum(int *q,int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+*q;
    q++;
  }
  return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int a[5];
    cout<<"Enter the elements in array "<<endl;
    array(a,n);             // or array(&a[0],n);
    int sum=arraysum(a,n);
    cout<<"sum of elements in array are "<<sum;

}


