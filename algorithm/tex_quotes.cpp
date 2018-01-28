#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    char c;
    int q=1;
    
    while((c=getchar()) != EOF){
        if(c == '"'){
            if(q){
                cout << '"';
            }
            else{
                cout << '"';
            }
            q=!q;
        }
        else{
           cout << c ; 
        }
    }
    return 0;
}
