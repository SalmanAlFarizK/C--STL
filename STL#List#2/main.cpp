// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>

using namespace std;
void displayList(list<int> l)
{
    cout<<"the list implemanted is : ";
    for(auto i : l)
    {
        cout<<i<<"->";
    }
    cout<<endl;
    cout<<"the size of the list is : ";
    l.sort();
    for(auto i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the front element is : "<<l.front()<<endl;
    cout<<"the back element is : "<<l.back()<<endl;
}

int main() {
   cout<<"creating the list of size 10 "<<endl;
   list<int>L1;
   for(int i=10;i>=1;i--)
   {
       L1.push_back(i);
   }
   displayList(L1);
    return 0;
}
