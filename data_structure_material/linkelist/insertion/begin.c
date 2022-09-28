#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
struct node* insertbegin(struct node *head,int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data=data;
    ptr->next=head;
    return ptr;
}
void linklist(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr= ptr->next;
    }
    
}
int main()
{
    struct node *head= (struct node*)malloc(sizeof(struct node));
    struct node *first= (struct node*)malloc(sizeof(struct node));
    struct node *second= (struct node*)malloc(sizeof(struct node));
    struct node *third= (struct node*)malloc(sizeof(struct node));

    head->next=first;
    head->data= 6;

    first->next=second;
    first->data= 9;

    second->next=third;
    second->data= 3;

    third->next= NULL;
    third->data= 1; 

    printf("linke lost before insertion:\n\n");
    linklist(head);
    printf("link list after insertion:\n\n");
    head= insertbegin(head, 3);
    linklist(head);


    
}
