// multiplied sum
// consider the following sequence
//  1 1 2 3 4 9 8 27 16 81 32 243 64
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int  n1 = 1, n2 = 1, n;
    cout << "Enter the number" << endl;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
    }
    for (int i = 3; i <= n; i++)
    {
        if (i & 1 == 1)
        {
            n1 = n1 * 2;
            if (i == n)
            {
                cout << n1;
                break;
            }
        }
        if (i % 2 == 0)
        {
            n2 = n2 * 3;
            // cout<<"ok"<<endl;
            if (i == n)
            {
                cout << n2;
                break;
            }
        }
    }
}