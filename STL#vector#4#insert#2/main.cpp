#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec={1,2,3,4};
    vector<int>temp={100,150,180,200};
    cout<<"before inseting the range of elements into vec array using inser() function "<<endl;
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vec.insert(vec.begin()+1,temp.begin()+1,temp.begin()+3);
    cout<<"after inseting the range of elements into vec array using inser() function "<<endl;
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
}
