#include<stdio.h>
#include<stdlib.h>
#define size 5

int top = -1, stack[size];

void push(int num)
{
    if (top == size-1)
    {
        printf("\n the stack is full");
    }
    else
    {
        top++;
        stack[top] =num;
    }
}

int pop(){
    
    if(top== -1)
    {
        printf("\n the stack is empty");
        //  return -1;
    }
    else{
        
        printf("\n %d pop",stack[top]);
        top--;
        return stack[top];
        
    }

}
void peep(int location)
{
    int index = top-location+1;
    if (index >=0 && index<= top)
    {
        printf("\n%d",stack[index]);
    }
    
}

int peek(){

    int num;
    num=stack[top];
    return num;

}





void display()
{
    int i;
    for(i = top;i >=0;i--)
    {
        printf("\n %d",stack[i]);
    }

}
int main()
{
    int choice,num;
    while (-1)
    {
        printf("\n 1 for push \n 2 for pop \n 3 for display \n 4 for peek \n 5 for peep\n 0 for exit \n enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter number:");
            scanf("%d",&num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\n top of the stack = %d",peek());
            break;
        
        case 5:
            printf("\n enter number:");
            scanf("%d",&num);
            peep(num);
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