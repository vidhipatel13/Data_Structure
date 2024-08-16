#include<stdio.h>
#include<stdlib.h>
#define size 50

char stack[size];
int top = -1;

void push(char c)
{
    if (top == size-1)
    {
        printf("\n the stack is full");
    }
    else
    {
        top++;
        stack[top] = c;
    }
}

int pop()
{
    char c;
    if(top== -1)
    {
        printf("\n the stack is empty");
         return -1;
    }
    else{
        
        printf("\n %c pop",stack[top]);
        top--;
        return stack[top];
        
    }

}

char peek(){

    char ch;
    ch=stack[top];
    return ch;

}

void display()
{
    int i;
    printf("\n");
    for(i = top;i >=0;i--)
    {
        printf("\n %c",stack[i]);
    }

}
int main()
{
    int choice, i;
    char c, str[40];
    while (-1)
    {
        printf("\n 1 for push \n 2 for pop \n 3 for display \n 4 for peek\n 0 for exit \n enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter string:");
            fflush(stdin);
            gets(str);
            for ( i = 0; str[i] != '\0'; i++)
            {
                push(str[i]);
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n the top of stack %s",peek());
            break;
        case 0:
            exit(0);
        default:
            printf("\ninvalid choice");
            break;
        }
    }
    
    return 0;
}