#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=10000;

int main()
{
    int n, q, x, kcase=0, a[maxn];

    while(1){
    cin >> n >> q;
    
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    cout << "CASE:" << ++kcase << endl; 
    while(q--){
       cin >> x;
       int p= lower_bound(a, a+n, x) - a;
       if(a[p]==x) cout << x << " found at " << p+1;
       else cout << x << " not found " << endl;
        }
   }
    return 0;
}
