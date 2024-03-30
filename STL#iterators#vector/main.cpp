#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    vector<int>::iterator it;
    cout << "Accessing vector elements using iterator:" << endl;
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Reversed: ";
    vector<int>::reverse_iterator rit;   //reversed iterator initialization
    for (rit = v.rbegin(); rit != v.rend(); rit++) {
        cout << *rit << "-";
    }
    cout<<endl;

    return 0;
}
