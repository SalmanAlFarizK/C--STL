#include<bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 5>arr={7,2,3,4,100};
     int &a=arr.front();
     int &b=arr.back();
    cout<<a<<endl;
    cout<<b<<endl;
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}
