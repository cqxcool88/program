#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, x, y, t=1, a[100][100];
    cin >> n;
    memset(a, 0, sizeof(a));
    a[x=n-1][y=0]=t++;

    while(t <= n*n){
        while(y+1<n && !a[x][y+1]) {a[x][++y]=t++;}        
        while(x-1>=0 && !a[x-1][y]) {a[--x][y]=t++;}
        while(y-1>=0 && !a[x][y-1]) {a[x][--y]=t++;}        
        while(x+1<n && !a[x+1][y]) {a[++x][y]=t++;}
        }

    for(y=0; y<n; y++){
        for(x=0; x<n; x++){
            cout<<a[x][y]<<" ";
            }
        cout << endl;
        }
    return 0;
}
