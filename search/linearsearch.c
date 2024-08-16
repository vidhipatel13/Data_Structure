#include<stdio.h>
#define SIZE 10

int a[]= {10,20,30,40,50,60,70,80,90,100};

void linearSearch(int key){
    int i;
    int success = 0;
    for ( i = 0; i < SIZE; i++)
    {
        if (a[i]==key)
        {
            success=1;
            printf("\n %d found",key);
            break;
        }  
    }
    if (success == 0)
    {
        printf("\n %d not found",key);
    } 
}

int main(){

    linearSearch(700);
}

//time>>> O(n)
// ---------------------------------------------------------------------------------------------------------------
// linearsearch using n/2 using two loops

