#include<iostream>
#include<queue>
#include<map>
using namespace std;

int main()
{
    int t,kase=0;
    while(scanf("%d", &t) ==1 && t){
        printf("Scenario #%d\n", ++kase);

        map<int , int> team;
        for(int i=0; i<t; i++){
            int n,x;
            scanf("%d", &n);
            while(n--){scanf("%d", &x); team[x] = i;}
        }

        queue<int> q, q2[maxt];
    }
}
