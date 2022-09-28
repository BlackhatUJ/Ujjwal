#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* delatindex(struct node* head, int index)
{
 struct node*temp=head;
 struct node *temp2= head->next;
 while (temp2->data!=index && temp2->next!=NULL)        
 {
    temp=temp->next;
    temp2=temp2->next;
    
 }
 if (temp2->data=index)
 {
     temp->next=temp2->next;
     free (temp2);

 }
 return head;
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

    printf("before deletion:\n");
    linklist(head);
    head=delatindex(head,3);
    printf("after deletion at specific index:\n");
    linklist(head); 

    return 0;
}