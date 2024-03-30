#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    cout<<"the size of the stack is  : "<<s.size()<<endl;
    cout<<"the stack members are : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"the size of the stack is after popping every elements : "<<s.size();
}
