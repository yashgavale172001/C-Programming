#include<iostream>
using namespace std;
// int main()
// {
//     int a=100;
//     int *p=&a;
//     int **q=&p;
//     int b=(**q)++;

//     int *r=*q;

//     (*r)++;
//     cout<<a<<" "<<b;
// }
// void Q(int z)
// {
//     z+=z;
//     cout<<z<<" ";
// }
// void p(int *a)
// {
//     int x=*a+2;
//     Q(x);
//     *a=x-1;
//     cout<<x<<" ";
    
// }
// int main()
// {
//     int x=5;
//     int *b=&x;
//     int c=*b++;
//     cout<<x;
//     // p(&x);
//     // cout<<x<<" ";
// }

// int main()
// {
//     int i=10;
//     int &a=i;
//     //cout<<&i<<" "<<&a;address is same
// }


// int main()
// {
//    int m,n;
//    cin>>m>>n;
//    int **p=new int *[m];
//    for(int i=0;i<m;i++)
//    {
//      p[i]=new int[n];
//      for(int j=0;j<n;j++)
//      {
//         cin>>p[i][j];
//      }
//    }
//    for(int i=0;i<m;i++)
//    {
//      for(int j=0;j<n;j++)
//      {
//         cout<<p[i][j]<<" ";
//      }
//      cout<<endl;
//    }
// }


// int main()
// {
//     int i =10;
//     int d=92;
//     int const *j=&i;
//     // i++;
//     j=&d;
//     cout<<*j;

//     // int i=34;
//     // int k=23;
//     // int *const j=&i;
//     // (*j)++;

// }


// #include <iostream>
// using namespace std;
// int factor(int n)
// {
//    // cout<<n<<" ";
//     if(n==0)
//     {
//         return 1;
//     }
//     int multiply=factor(n-1);
//     return n*multiply;

// }
// int main()
// {
//     int n;
//     cout<<"Enter the value "<<endl;
//     cin>>n;
//    cout<<factor(n);
// }


// int total(char str[])
// {
//    //static int len;
//    if(str[0]=='\0')
//    {
//     return 0;
//    }
//    int len=total(str+1);
//    return 1+len;
// }
// int main()
// {
//     char str[]={"Yash Gavale"};
//     int length=total(str);
//     cout<<"length of the string is "<<length;
// }

void removeX(char str[])
{
  if(str[0]=='\0')
  {
    cout<<str;
  }
  if(str[0]!'\0')
  {
    remove(str+1);
  }
  else{
    int i=0;
    for(int i;str[i]!='\0';i++)
    {
        str[i]=str[i+1];
    }
    str[i]='\0';
    removeX(str);
  }
}
int main()
{
    char str[10];
    cin>>str;
    removeX(str);
}