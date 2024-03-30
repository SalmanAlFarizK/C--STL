#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v={1,2,3,4};
    cout<<"vector array before inserting new element using insert() function"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+3,1080);
    cout<<"vector array after inserting a single new element using insert() function"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after inserting multiple elements in the given index using insert() function"<<endl;
    v.insert(v.begin()+1,5,333);
     for(auto i : v)
    {
        cout<<i<<" ";
    }

}
