
//       * 
//      * * 
//     *   * 
//    *     * 
//   *       * 
//  * * * * * *  
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(int k=i;k>=1;k--)
        {
            if(i==n)
            {
                cout<<"* ";
            }
            else if(i==k || k==1)
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}