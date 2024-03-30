
//Array library
#include<bits/stdc++.h>

using namespace std;

int main()
{
  array<int,6>arr={1,2,3};
  cout<<"the array is "<<endl;
  for(int i=0;i<6;i++)
  {
      cout<<arr.at(i)<<" ";
  }
  cout<<endl;
  cout<<arr.size()<<endl; //prints the size
  cout<<arr.max_size();
}
