#include<iostream>
using namespace std;

int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];

    for(int x=0; x<2; x++){
        for(int y=x+1; y<3; y++){
            if(a[x]>a[y]){
            int t=a[x];
            a[x]=a[y];
            a[y]=t;
            }
        }
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<endl;
}

