#include<stdio.h>


struct edge
{
    int src;
    int dest;
};

int main(){

    int totalEdge,i;
    struct edge e[10];
    int s,d;
    printf("\nHow many edges do you want to add?");
    scanf("%d",&totalEdge);

    for (int i = 0; i <totalEdge; i++)
    {
        printf("\nEnter source and destination");
        scanf("%d%d",&s,&d);

        e[i].src =s;
        e[i].dest =d; 
        i++;
        e[i].src=d;
        e[i].dest=s;

    }
    

    for (int i = 0; i < totalEdge*2; i++)
    {
        printf("\n%d is connected with %d",e[i].src,e[i].dest);
        // printf("\n%d is connected with %d",e[i].dest,e[i].src);
        
    }

    return 0;
    
}