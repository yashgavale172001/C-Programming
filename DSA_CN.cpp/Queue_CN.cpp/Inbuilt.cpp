#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    //cout<<"queue is "<<endl;
    // while(!q.empty())
    // {
    //     int temp=q.front();
    //     cout<<temp<<" ";
    //     q.pop();
    // }
    cout<<"Front of queue is ";
    cout<<q.front()<<endl;
    cout<<"back of queue is ";
    cout<<q.back()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    cout<<"queue is "<<endl;
    while(!q.empty())
    {
        int temp=q.front();
        cout<<temp<<" ";
        q.pop();
    }

}