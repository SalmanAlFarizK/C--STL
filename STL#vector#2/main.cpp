#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout<<"printing after push back"<<endl;
    for(auto i: vec)
    {
        cout<<i<<" "; //will print 0 1 2
    }
    cout<<endl;
    vec.pop_back();
    cout<<"printing after pop back"<<endl;
    for(auto i: vec)
    {
        cout<<i<<" ";  //will print 0 1
    }
    cout<<endl;
    cout<<"first element printed using rend() method : "<<*(vec.rend()-1); //will print 0 the first element in the vector

}
