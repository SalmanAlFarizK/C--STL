#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int>L1(3),L2={1,2,3};
    cout<<"first list : ";
    for(auto i: L1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"second list : ";
    for(auto i : L2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    if(L1==L2)
    {
        cout<<"lists are equal"<<endl;
    }else{
    cout<<"Lists are not equal"<<endl;
    }
    cout<<"size of list 1 is : "<<L1.size()<<endl;
    cout<<"size of list 2 is : "<<L2.size()<<endl;
    cout<<"the first element of the L2 list is : "<<L2.front()<<endl;
    cout<<"the last element of the L2 list is : "<<L2.back()<<endl;
    auto it=L2.begin();
    L2.insert(it+1,708);
    cout<<"the L2 list after insert() function : ";
    for(auto i : L2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
