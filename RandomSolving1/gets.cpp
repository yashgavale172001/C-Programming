// #include<iostream>
// using namespace std;
// int main()
// {
//     char n[10];
//     cout<<"Enter the name"<<endl;
//     gets(n);
//     cout<<"My name is ";
//     for(int i=0;n[i]!='\0';i++)
//     {
//         cout<<n[i];
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    char x[7];
    cin>>x;
    for(int i=0;x[i]!='\0';i++)
    {
        cout<<x[i]; 
    }
}