#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    for(int i=1;i<=10;i++)
    {
        v.push_back(i);
    }
    bool a=binary_search(v.begin(),v.end(),2);
    if(a){
        cout<<"element found "<<endl;
    }else{
    cout<<"element not found"<<endl;
    }
}
