#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void insertatbegin(struct Node**head_ref,int newdata)
{
    struct node* ptr= malloc(sizeof(struct node));
    ptr->data= newdata;
    ptr-> next=(**head_ref);
    (*head_ref)= ptr;
}
void linkelist(struct node*ptr)
{
    
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
}
int main()
{
    // initilisze nodes

    struct node *head ;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    //struct node *four = NULL;

    // allocate memory
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head-> next=first;
    head->data=8;

    first->next= second;
    first->data= 1;

    second-> next= third;
    second->data= 9;

    third->next= NULL;
    third->data= 3;

    printf("linked list before insertion\n\n");
    linkelist(head);

    printf("linkeedlist after insertion\n\n");
    head=insertatbegin(head,3);

