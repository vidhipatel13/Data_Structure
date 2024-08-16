#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[30];
    int c,cpp,java;
    float perc;
};

int main(){
    struct student *s;
    s= malloc(sizeof(struct student));
    printf("\n enter name:");
    scanf("\n%s",&s->name);

    printf("\n enter marks of 3 subjects:");
    scanf("%d%d%d",&s->c,&s->cpp,&s->java);

    s->perc = (s->c + s->cpp +s->java)/3.0;
    printf("\n name = %s",s->name);
    printf("\n c= %d \n cpp = %d \n java = %d \n perc = %f", s->c,s->cpp,s->java,s->perc);
    return 0;
    
}

