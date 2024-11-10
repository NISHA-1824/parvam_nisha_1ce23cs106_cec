#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node/next;
};
void create(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}

