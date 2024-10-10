
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        char x='A';
        for(int k=i;k<=n;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=temp;j++)
        {
            cout<<x;
            if(j>=i)
            {
                x--;
            }
            else{

            x++;
            }
        }
        temp=temp+2;
        cout<<endl;
    }
}