#include <iostream >
using namespace std ;

int main ()
{
    // int n;
    // int num;
    
    // int m=0;
    // cout<<"enter the number : "<<endl;
    // cin>>n;
    // cout<<" find which number repeatation you want:"<<endl;
    // cin>>num;
    
    
    // int arr[]={n};
    // int size =sizeof(arr)/sizeof(int);
    // for(int i=0;i<size;i++)
    // {
    //     if(arr[i]==n)
    //     {
    //         m++;
    //     }
    // }
    // cout<<num<<" is "<<m<<endl;


    string s;
    char ch;
    int c=0;
    cin>>s>>ch;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        c++;
    }
    cout<<c;
    return 0;
}