//      1 
//     1 2 
//    1   3 
//   1     4 
//  1 2 3 4 5 
 #include<iostream>
using namespace std;
int main()
{
     for(int i=1;i<=5;i++)
     {
        for(int j=5;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(i==5)
            {
                cout<<k<<" ";
            }
            else if(i==k || k==1)
            {
                cout<<k<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
     }
}