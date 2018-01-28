#include <stdio.h>

char array[]={2,1,3,5,4};

void swap(char *a,char *b)  
{  
    char temp;  
    temp=*a;  
    *a=*b;  
    *b=temp;  
}

int main(void)
{
    char a;
    int i,j;

    for(i=1;i<5;i++){   /* only need n-1 times */
        for(j=0;j<i;j++){
            if(array[i] < array[j]){  /* must switch the position */
               while(i-=1)
                 swap(array+i,array+i-1);
            }
        }
        printf("value:%d\n", array[i]);
    }
    printf("value:%d\n", array[4]);
    return 0;
}
