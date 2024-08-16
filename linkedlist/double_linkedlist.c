#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;

void addNode(int num){
    struct node *tmp=NULL;
    if (head==NULL)
    {
        head=malloc(sizeof(struct node));
        head->data = num;
        head->next =NULL;
        head->prev=NULL;
        last = head;
    }else{
        tmp=malloc(sizeof(struct node));
        tmp->data=num;
        tmp->next=NULL;
        tmp->prev=last;//X
        last->next=tmp;
        last=tmp;
        last=head;
    }
    
}
int main(){
    addNode(10);
    addNode(20);
    return 0;
}