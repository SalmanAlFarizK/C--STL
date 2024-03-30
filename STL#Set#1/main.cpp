#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>s={1,2,3,5,3,2,7,9,0};
    cout<<"the set elements are : ";
    for(auto i : s)
    {
        cout<<i<<" ";     //printed by removing all the duplicate elements and folloew the ascending order
    }
    cout<<endl;

    set<int,greater<int>>s2(s.begin(),s.end());
    cout<<"the descending order set is : ";
    for(auto i : s2)
    {
        cout<<i<<" ";        //this will print a descending order set since we used a comparator function in the syntax of s2
    }
    cout<<endl;

    return 0;
}
