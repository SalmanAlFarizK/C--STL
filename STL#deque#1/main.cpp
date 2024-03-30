#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int>myDeque={1,2,3,4};
    cout<<"the deque elements are : ";
    for(auto i: myDeque)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
    myDeque.push_front(28);
    myDeque.push_front(18);
    myDeque.push_back(101);
    myDeque.push_back(333);
    cout<<"after push_front() and push_back() operation the deque is : ";
    for(auto i: myDeque)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    myDeque.pop_back();
    myDeque.pop_front();
    cout<<"deque after pop_front() and pop_back() operation : ";
    for(auto i : myDeque)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size is : "<<myDeque.size()<<endl;

    cout<<"insert operation is performed on deque by adding a single element  : ";
    myDeque.insert(myDeque.begin()+1,909);
    for(auto i : myDeque){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"insert operation i sperformrd in deque by addiing multiple element : ";
    myDeque.insert(myDeque.begin()+1,4,189);
    for(auto i: myDeque)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"erase operation is performed in deque : ";
    myDeque.erase(myDeque.begin()+1);
    for(auto i : myDeque)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"range based erase operation is performed : ";
    myDeque.erase(myDeque.begin()+5,myDeque.begin()+9);
    for(auto i : myDeque)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
