#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void pop()
{
    struct node*ptr;
    if (head==NULL)
        printf("##empty stack##");
    else
    {
        printf("pop element =%d\n",head->data);
        ptr=head;
        head=head->next;
        free(ptr);

    }
}
void push(int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;

}
void linklist()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main()
{
 push(10);
    push(20);
    push(5);
    push(50);
    printf("link list:\n");
    linklist();
    pop();
    printf("after poping out element:\n");
    linklist();
    pop();
    printf(" after poping out element:\n");
    linklist();
     return 0;
}


