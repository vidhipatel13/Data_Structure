// ----------------------------------------------------------DMA

// #include<stdio.h>
// #include<stdlib.h>


// int main(){

//     int *p; 
//     int *a; 
//     int i; 
//     p = malloc(sizeof(int)); //TC 
//     printf("\nEnter number");
//     scanf("%d",p);
//     printf("\np = %d",*p);//value at p ;

//     a = calloc(5,sizeof(int)); //5*4 = 20 

//     for(i=0;i<5;i++){
//         printf("\nEnter number");
//         // scanf("%d",&a[i]);//a[0]
//         scanf("%d",a+i);
//     }
//     //a->base address -> 0th index address 
//     //a[0] 

//     //a 
//     //a[0]
    
//     for(i=0;i<5;i++){
//         printf("\n%d",a[i]);
//     }

//     return 0; 
// }





// ---------------------------------------------------DMA array

// #include<stdio.h>   
// #include<stdlib.h>

// int main(){

//     int *p; 
//     int i;
//     int sum=0; 
//     p = calloc(5,sizeof(int)); 

//     for(i=0;i<5;i++){
//         printf("\nEnter value");
//         scanf("%d",&p[i]);
//     }


//     for(i=0;i<5;i++){
//        sum = sum + p[i];
//     }

//     printf("\n sum = %d",sum);
//     return 0; 
// }





//---------------------------------- addition of two using DMA

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *a;
//     int *b;
//     int c;
//     a= malloc(sizeof(int));
//     printf("enter number");
//     scanf("%d",a);
    

//     b=malloc(sizeof(int));
//     printf("enter number");
//     scanf("%d",b);

//     printf("\n  a= %d",*a);
//     printf("\n b= %d",*b);
//     c = *a+*b;
//     printf("\nc=%d",c);
    

//     return 0;
// }



//------------------------------------------ find max using 3 pointers

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *a;
//     int *b;
//     int *c;

//     a= malloc(sizeof(int));
//     printf("enter number");
//     scanf("%d",a);

//     b= malloc(sizeof(int));
//     printf("enter number");
//     scanf("%d",b);

//     c= malloc(sizeof(int));
//     printf("enter number");
//     scanf("%d",c);

//     if(*a>*b && *a>*c){
//         printf("\n %d is greater",*a);
       
//     }else if (*b>*c && *b>*a)   
//     {
//         /* code */printf("\n %d is greater",*b);
//     }
//     else     
//     {
//         printf("\n %d is greater",*c);
//     }
    
    
    
// }


//------------------------------------------ find sum of 5 numbers 

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p,i;
//     p = calloc(5,sizeof(int));

//     for(i=0;i<5;i++){
//         printf("\nenter value:");
//         scanf("%d",&p[i]);
//     }

//     int sum=0;
//     for(i=0;i<5;i++){
//         sum = sum +p[i];
        
//     }
//     printf("\n sum is %d",sum);
//     return 0;    
// }