#include <stdio.h>

char array[]={2,1,3,5,4};

int main(void)
{
    char a;
    int i,j;

    for(i=0;i<4;i++){   /* only need n-1 times */
        for(j=i+1;j<5;j++){
            if(array[i]<array[j]){  /* must switch the position */
                a=array[i]; 
                array[i]=array[j];
                array[j]=a;
            }
        }
        printf("value:%d\n", array[i]);
    }
    printf("value:%d\n", array[4]);
    return 0;
}
