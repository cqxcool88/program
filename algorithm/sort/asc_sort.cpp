#include <iostream>
using namespace std;

void min_sort(void)
{
    char t,a,b,c;
    
    cin>>a>>b>>c;

    if(a>b){t=a;a=b;b=t;}
    if(a>c){t=a;a=c;c=t;}
    if(b>c){t=b;b=c;c=t;}
    
    cout<<" "<<a<<" "<<b<<" "<<c<<endl;
}

int main()
{
    int i;
    
    cin>>i;
    while(i--){
        min_sort();
    }
}
