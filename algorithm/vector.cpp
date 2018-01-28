#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;

    a.insert(a.begin(), 100);
    a.insert(a.begin()+2, 99);
    a.insert(a.end(), 99);

    vector<int>::iterator it;
    for(it=a.begin(); it!=a.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}
