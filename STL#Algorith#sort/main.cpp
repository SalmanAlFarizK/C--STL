#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   vector<int>v={4,6,2,1,-4,0,2};
   cout<<"vector array before sorting : ";
   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
   cout<<"after sorting : ";
   sort(v.begin(),v.end());
   for(it=v.begin();it!=v.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
   vector<string>::iterator it2;
   vector<string>v2={"apple","orange","bat","ball","pancake","butter","zebra","peacock"};
   cout<<"string vector before sorting : ";
   for(it2=v2.begin();it2!=v2.end();it2++)
   {
       cout<<"'"<<*it2<<"'"<<" ";
   }
   cout<<endl;
   cout<<"string vector after sorting : ";
   sort(v2.begin(),v2.end());
   for(it2=v2.begin();it2!=v2.end();it2++)
   {
       cout<<"'"<<*it2<<"'"<<" ";  //this will give the sort result in ascending order by default
   }
   cout<<endl;
   cout<<"vector after sorting in descending order : ";
   sort(v.begin(),v.end(),greater<int>());
    for(it=v.begin();it!=v.end();it++)
   {
       cout<<*it<<" ";
   }
   cout<<endl;
}
