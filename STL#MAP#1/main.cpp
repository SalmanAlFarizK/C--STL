#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int>M;
    M["one"]=1;
    M["two"]=2;
    M["three"]=3;

    map<string,int>::iterator it=M.begin();
    cout<<"the map elements are"<<endl;
    while(it!=M.end())
    {
        cout<<it->first<<endl;
        it++;
    }
}
