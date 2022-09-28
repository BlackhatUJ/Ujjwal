#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *atindex(struct node*head,  int data,int index)
{
    struct node *ptr=head;
    struct node *ptr2= (struct node*)malloc(sizeof(struct node));
   ptr2->data=data;
   ptr2->next=NULL;

   index--;
   while (index !=1)
   {
       ptr=ptr->next;
       index--;
   }
   ptr2->next=ptr->next;
   ptr->next=ptr2;
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

        printf("before insertion:\n");
        linklist(head);
        printf("after insertion at specific index:\n");
        atindex(head,9,2);
        linklist(head);

        return 0;
    }
