/*#include <iostream>
#include <stack>
using namespace std;

//#include "solution.h"
void reverseStack(stack<int> &input, stack<int> &extra) 
{
	// Write your code here
    int x;
	while(!input.empty())
    {
        x=input.top();
        extra.push(x);
        input.pop();
    }
    input=extra;
}
int main() 
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}*/
#include <iostream>
using namespace std;
#include<queue>
void reverseQueue(queue<int> &input) 
{
	// Write your code here
    if(input.empty())
    {
        return;
    }
    int x=input.front();
    input.pop();
    reverseQueue(input);
    input.push(x);
}



int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}