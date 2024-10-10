// E
// DE
// CDE
// BCDE
// ABCDE
// #include<bits\stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         char ch='A';
//         ch=ch+(5-i);
//         for(int j=1;j<=i;j++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }
#include<bits\stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        char ch='E';
        ch=ch-i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}