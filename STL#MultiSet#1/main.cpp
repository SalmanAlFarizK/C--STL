#include<iostream>
#include<set>

using namespace std;

int main()
{
    multiset<int>ms;
    for(int i=0;i<=5;i++)
    {
        for(int j=i;j<=3;j++)
        {
            ms.insert(j);
        }
        ms.insert(i);
    }
    cout<<"the multi set elements are : ";
    for(auto i : ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    multiset<int,greater<int>>ms2(ms.begin(),ms.end());
    cout<<"the second multiset elements are : ";
    for(auto i : ms2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the size of the first multiset is : "<<ms.size()<<endl;
    cout<<"the count of 3 in second mulltiset is : "<<ms2.count(3)<<endl;
}
