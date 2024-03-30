#include<iostream>
#include<utility>

using namespace std;

int main()
{
    pair<int,int>p;
    p=make_pair(1,2);
    cout<<"the first element of pair is : "<<p.first<<endl;
    cout<<"the second element of pair is : "<<p.second<<endl;
    cout<<"pair implementation in array "<<endl;
    pair<int,string>p1[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter first element : "<<endl;
        cin>>p1[i].first;
        cout<<"enter the second value string : "<<endl;
        cin>>p1[i].second;
    }
    cout<<"the elements are : "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
}
