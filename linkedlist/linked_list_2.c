#include<stdio.h>
#include<stdlib.h>


struct node {
    int data; 
   struct node *next;
};

struct node *head=NULL,*last=NULL;// linked list is empty 


void addNode(int num){//10 : head 
    struct node *tmp;
    if(head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head; 
    }else{
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next= NULL;
        last->next = tmp;
        last = tmp ; 
    }
    
}

void display(){
    struct node *p;

    if (head == NULL)
    {
        printf("\n linked list is empty");
    }else{
        p = head;
        while (p!=NULL)
        {
            printf("%d",p->data);
            p=p->next;
        }
        
    }
    
}
void sum(){
    struct node *temp=head;
    int sum =0;
    while (temp!=NULL)
    {
        sum+=temp->data;
        temp = temp->next;
    }
    printf("\n sum of elements %d",sum);
}
void max(){
    struct node *temp = head;
    int max = 0;
    if(temp==NULL){
        printf("List is empty");
        return; 
    }
    else{
        max = temp->data;
    }
    while(temp!=NULL){
        if(temp->data>max){
            max = temp->data;
            }
            temp = temp->next;
            
        }
        printf("\n max of all elements %d",max);
}

void addBeg(int n){
    struct node *tmp;
    if(head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        last = head; 
    }else{
        tmp = malloc(sizeof(struct node));
        tmp->data = n;
        tmp->next= head;
        head = tmp ; 
    }
        
}

void addAnyAtAfter(int key, int n){
    struct node *p,*tmp;
    p=head;

    while (p!=NULL)
    {
        if (p->data == key)
        {
            break;
        }
        p=p->next;
    }
    if (p == NULL)
    {
        printf("\n invalid key PTA");
    }
    else{
        if (p==last)
        {
            addNode(n);
        }
        else{
            tmp = malloc(sizeof(struct node));
            tmp->data =n;
            tmp->next = p->next;
            p->next = tmp;
        }   
    }
}

// int main(){

//     addNode(10);
//     addNode(20); 
//     addNode(30);
//     display();
//     sum();
//     max();
//     addBeg(23); 
//     addAnyAtAfter(20,25);

//     return 0;
// }
void main()
{
    int choice;
    int data;

    while (1)
    {
        printf("\n1. ADD Node \n2.Display Data of List \n3.sum of data \n4.max of data \n5.addbeg data \n6.addanyatafter data \n0. Exit ");
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
        case 3:
            sum();
            break;
        case 4:
            max();
            break;
        case 5:
            addBeg(23);
            break;
        case 6:
            addAnyAtAfter(20,25);
            break;
        case 0:
            exit(0);
            break;
        } // switch

    } // while

} // main
