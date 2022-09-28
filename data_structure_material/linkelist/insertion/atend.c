#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* atend(struct node *head, int data)
{
    struct node *temp,*ptr;
    ptr=head;
    temp = (struct node *)malloc(sizeof(struct node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->data=data;
    temp->next=NULL;
    
    
}
    void linklist(struct node * ptr)
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
    int main()
    {
        struct node *head = (struct node *)malloc(sizeof(struct node));
        struct node *first = (struct node *)malloc(sizeof(struct node));
        struct node *second = (struct node *)malloc(sizeof(struct node));
        struct node *third = (struct node *)malloc(sizeof(struct node));

        head->next = first;
        head->data = 6;
        first->next = second;
        first->data = 3;
        second->next = third;
        second->data = 3;
        third->next = NULL;
        third->data = 2;

        printf("before the insertion at the end: \n");
        linklist(head);
        printf("after the insertion at the end:\n");
        
        head=atend(head,65);
        linklist(head);
        
    

        return 0;
    }