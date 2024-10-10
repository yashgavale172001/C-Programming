
// using namespace std;
// int main()
// {
//     int a=50;
//    int  *ptr=&a;
//     // cout<<(*ptr)++;
//     cout<<++(*ptr);
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << " " << f <<" " << p;

// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     // cout << *(a) << " " << *(a+1);
//     cout<<a<<endl;
//     cout<<a+1;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[6] = {1, 2, 3};
//     int *b = a;
//     cout << b[2];
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     int *p = a++;
//     cout << *p << endl;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3};
//     char b[]={'abc'};
//     cout<<a<<" "<<b;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     char b[] = "xyz";
// char *c = &b[0];
// c++;
// cout << c << endl;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
// }
// #include<iostream>
// using namespace std;
// void print(int *p)
// {
//     p++;
//     // cout<<*p;
//     // cout<<p<<endl;
// }
// int main()
// {
//     int i=10;
//     int *p=&i;
//     cout<<p<<endl;
//     print(p);
//     cout<<p;
// }

// #include<iostream>
// using namespace std;
// int sum(int arr[])
// {   
    
    
//     int as=0;
// }
// int main()
// {    int n=6;
//     int arr[n]={1,2,3,4,5,6};
//     int a=sum(arr);
//     // cout<<a;
//     // cout<<sizeof(arr)/sizeof(arr[0]);
    
// }

// #include<iostream>
// using namespace std;
// void inc1(int **p)
// {
    
//     cout<<*p<<endl;
// }
// int main()
// {
//     int i=10;
//     int *p=&i;
//     cout<<&i<<endl;
//     inc1(&p);
//     // cout<<*p;
    
// }


// important

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
// int *p = &a;
// int **q = &p;
// int b = ++(**q) + 4;
// cout<<b<<endl;

// cout << a << " " << b << endl;
//


// #include<iostream>
// using namespace std;
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }

// int main()
// {
//    char *x = "geeksquiz";
//    char *y = "geeksforgeeks";
//    char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<< ptr2 - ptr1;
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     char c=65;
//     int i=c;
//     char*p=&c;
//     int*pc=(int*)p;

//     cout<<*p<<endl;
//     cout<<*pc;
// }
// #include<iostream>
// using namespace std;
// #include <iostream>
// using namespace std;

// void updateValue(int *p){
//     *p = 610 % 255;
// }

// int main(){
//     char ch = 'A';
//     updateValue((int*)&ch);
//     cout << ch;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//   int a=10;
//   int *p=&a;
//   int **q=&p;
//   int b=20;
//   *q=&b;
//   (*p)++;
//   cout<<a<<" "<<b;
// }
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int *p=new int[n];
  // p[0]=100;
  // int n;
  // cin>>n;
  // int arr[n];
  int max=0;
  for(int i=0;i<=n;i++)
  {
      cin>>p[i];
  }
  for(int i=0;i<=n;i++)
  {
    if(max<p[i])
    {
      max=p[i];
    }
  }
  cout<<max;
  delete []p;

}