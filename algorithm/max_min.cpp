#include<iostream>
using namespace std;

int main()
{
    int i=4, t, a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    for(int x=0; x<4; x++){
        for(int y=x+1; y<5; y++){
            if(a[x]>a[y]){
                t=a[x];
                a[x]=a[y];
                a[y]=t;
            }
        }
    }
    cout<<a[0]<<" "<<a[4]<<endl;
}
