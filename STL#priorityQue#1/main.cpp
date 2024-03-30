//priority queue demonstration
#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(0);
    pq.push(1);
    pq.push(-5);
    pq.push(108);
    pq.push(9);
    pq.push(3);
    cout<<"the size of the priority queue is : "<<pq.size()<<endl;
    cout<<"the elements of the priority queue are : ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
