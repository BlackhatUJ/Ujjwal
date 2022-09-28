#include <stdio.h>
#include <stdlib.h>
// creating  node

struct node
{
    int value;
    struct node *next;
};

// print the linklist values
void linklist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
}
int main(int argc, char const *argv[])
{
    // initilisze nodes

    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    // allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    // assigning data values
    one->value = 10;
    two->value = 50;
    three->value = 40;
    four->value = 20;

    // connecting nodes
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    // printing node values
    head = one;

    linklist(head);

struct node *newnode;
newnode = malloc(sizeof(struct node));
newnode -> value =4;
newnode-> next=head;
head= newnode;
}