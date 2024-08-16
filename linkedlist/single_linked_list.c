#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void addNode(int);
void display();

struct node *head = NULL,
            *last = NULL;

void main()
{
    int choice;
    int data;

    while (1)
    {
        printf("\n1. ADD Node \n2.Display Data of List \n0. Exit ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Data : ");
            scanf("%d", &data);
            addNode(data);
            break;
        case 2:
            display();
            break;
        case 0:
            exit(0);
            break;
        } // switch

    } // while

} // main

void addNode(int data)
{
    struct node *temp;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
        
    } // if
    else
    {

        temp = malloc(sizeof(struct node));
        temp->data = data;
        last->next = temp;
        last = temp;
        temp->next = NULL;

    } // else
}

void display()
{
    struct node *temp = head;
    if (head == NULL && last == NULL)
    {
        printf("\nList Is Empty");
        return;
    }

    printf("\nData in List\n");
    while (temp->next != NULL)
    {

        printf("%d ", temp->data);
        temp = temp->next;

    } // while
    printf("%d ", temp->data);
    printf("\n\n");

} // display