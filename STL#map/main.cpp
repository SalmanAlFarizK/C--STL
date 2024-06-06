#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<string,int>M;
    M["one"]=1;
    M["two"]=2;
    M["three"]=3;
    M["four"]=4;
    M["five"]=5;
    M["six"]=6;
    M["seven"]=7;

    map<string,int>::iterator it=M.begin();

    while(it!=M.end())
    {
        cout<<"keys :   "<<it->first<<"            values :    "<<it->second<<endl;
        cout<<endl;
        it++;
    }
    return 0; 
}
