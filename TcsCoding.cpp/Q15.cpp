// A survey is being conducted in a housing society. The society has N number of towers TO. The surveyors are listing the number of floors in each tower (TI). The task is to find the number of floors which occur in even numbers in the society. Note: It is such that all the occurrences of the number of floors(T[I]) is odd in number. Only one number of floors occurs even number of times(E). If all the inputs are odd in number return value -1.

// Input

// 6

// Output

// 1

// [1,2,2,2,3,1)>TO, element T[O] to TIN-1), where each input element is separated by a new line.

// Explanation

// From the input array above:

// No. of occurrences of each number of floors.

// 1-> 2 times

// 2-3 times

// 3->1 time

#include <bits\stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> m;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a; // key
        m[a]++;   // value
    }
    for (auto i : m)
    {
        if ((i.second % 2) == 0)
        {
            cout << i.first;
            return 0;
        }
    }
    cout<<-1;
}