#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5,6,7,8};
    cout<<"vector array before erasing any element "<<endl;
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vector array after erasing at specified position "<<endl;
    v.erase(v.begin()+1);
    for(auto i: v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"vector array after erasing at range of position "<<endl;
    v.erase(v.begin()+1,v.begin()+5);
    for(auto i: v)
    {
        cout<<i<<" ";
    }
}
