#include <iostream>
using namespace std;

int a[101];

int main()
{
    int i;

    for(i=0; i<10; i++){
        cin>>a[i];
    }

    do{
        cout<<a[i-1]<<" ";
    }while(--i);
    cout<<endl;
}
