#include<iostream>
#include<map>
using namespace std;

map<int,int> m1;

int main()
{
    int i;
    m1.insert(pair<int,int> (1,11)); 
    m1.insert(pair<int,int> (2,22));
    i=m1.count(33);
    cout << i << endl;
    map<int,int>::iterator it;
    for( it=m1.begin(); it != m1.end(); it++){
        cout << it->first << " " << it-> second << endl;
    }
}
