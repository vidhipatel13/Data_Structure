#include<stdio.h>
#define SIZE 10

int a[]={10,20,30,40,50,60,70,80,90,100};
int b[]={1,2,3,4,5,6,7,8,9,0}
void ternarySearch(int search){
    int min,max,mid;
    min=0;
    max=SIZE-1;
    int success =0;

    while(min<=max){
        mid = (min+max)/2;
        if(search == b[mid])
        {
            success =1;
            break;
        }else if(search>b[mid])
        {
            min = mid+1;
        }else{
            
        }
    }
}

void binarySearch(int search){

    int min,max,mid;
    min=0;
    max=SIZE-1;
    int success =0;

    while (min<=max)
    {
        mid = (min+max)/2;
        if (search == a[mid])
        {
            success =1;
            break;
        }else if (search>a[mid])
        {
            min=mid+1;
        }else
        {
            max=min-1;
        }
    } 
    success==1?printf("\n%d found",search):printf("\n%d not found",search);    
}

int main(){

    binarySearch(10);
    binarySearch(-10);
    return 0;
}









