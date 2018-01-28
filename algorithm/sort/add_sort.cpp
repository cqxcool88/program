#include <iostream>
using namespace std;

void sort(int i)
{
    for(int x=1;x<=i;x+=2){
        if(x%2==1){
            cout<<x<<" ";
        }
    }
    for(int y=2;y<=i;y+=2){
        if(y%2==0){
            cout<<y<<" ";
        }
    }
}

int main()
{
    int a,z;

    cin>>a;
    while(a--){
        cin>>z;
        sort(z);
        cout<<endl;
    }
}

