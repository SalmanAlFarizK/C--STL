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
    M["fivr"]=5;

    map<string,int>::iterator it=M.begin();

    while(it!=M.end())
    {
        cout<<"keys :   "<<it->first<<"            values :    "<<it->second<<endl;
        it++;
    }
    return 0;
}
