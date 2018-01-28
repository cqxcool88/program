#include<iostream>
#include<cmath>
using namespace std;

int judge(int n)
{
    if(n==(pow(double(n/100),3)+pow(double((n/10)%10),3)+pow(double(n%10),3))){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl; 
    }
}

int main()
{
    int i;

    while(1){
        cin>>i;
        if(i){
            judge(i);
        }
        else{
            break;
        }
    }

    return 0;
}
