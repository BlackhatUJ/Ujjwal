#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node* delbegin( struct node *head)
{
    

       struct node* temp= head;
       head=head->next;
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
        
      
         struct node *ptr=head;
        printf("before deletion:\n");
        linklist(head);
        printf("after deletion:\n");
        
         head= delbegin(head);
        linklist(head);







        return 0;
    }