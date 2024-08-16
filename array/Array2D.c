
// 4*4 array
#include<stdio.h>
#include<stdlib.h>

int main(){

    int a[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the value of a[%d][%d]:",i,j);
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}

