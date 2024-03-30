#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>>v;
    int rows,cols;
    cout<<"enter the number of rows : "<<endl;
    cin>>rows;
    cout<<"enter the number of cols"<<endl;
    cin>>cols;
    for(int i=0;i<rows;i++)
    {
        vector<int>temp;
        int ele;
        cout<<"enter the number of elements to "<<i<<" row : "<<endl;
        for(int j=0;j<cols;j++)
        {
            cin>>ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }
    cout<<"the vector elements are : "<<endl;
    for (auto row : v) {
        for (auto ele : row) {
            cout << ele << " ";
        }
        cout << endl;
    }

}
