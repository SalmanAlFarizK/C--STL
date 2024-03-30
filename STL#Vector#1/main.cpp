#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vec={1,2,3,4,5,6};
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"using begin() and end() functions "<<endl;
   for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout<<"the last element accessed using rbegin() function "<<*vec.rbegin()<<endl;
    for( auto it=vec.rbegin();it!=vec.rend();it++)
    {
        cout<<*it<<" ";   //reversing of vector array is done here
    }
}
