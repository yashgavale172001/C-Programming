// 7
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                cout<<4<<" ";
            }
            else{
                  if(i==2 || i==n-1 || j==2 ||j==n-1)
                  {
                    cout<<3<<" ";
                  }
                  else{
                    if(i==3 || i==n-2 || j==3 || j==n-2)
                    {
                        cout<<2<<" ";
                    }
                    else{
                        cout<<1<<" ";
                    }

                  }
            }
        }
        cout<<endl;
    }
}