#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q ;
    q.push(0);
    q.push(1);
    q.push(2);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"now the size of the queue is : "<<q.size()<<endl;
    return 0;
}
