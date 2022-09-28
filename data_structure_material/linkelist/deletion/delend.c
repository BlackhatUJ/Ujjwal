#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *delend(struct node *head)
{
   
    
       struct node *temp=head;
       struct node*temp2=head;
       while (temp->next !=NULL)
       {
           temp2=temp;
           temp=temp->next;
       }
       temp ->next=NULL;
       free(temp);
       //temp=NULL;
       
    
 return head;   
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
        //struct node * ptr;
       
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

        printf("before deletion:\n");
        linklist(head);
       printf("after deletion at end\n");
          head= delend(head);
        linklist(head);
        return 0;
    }