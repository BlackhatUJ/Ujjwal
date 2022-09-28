#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow");
    }
    else
    {
        ptr->data = data;
        ptr->next = NULL;
        if (front == NULL)
        {
            front = rear = ptr;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
        }
        printf("inserted: %d\n", data);
    }
}
void dequeue()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (front == NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr = front;

    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values .....\n");
        while (ptr != NULL)
        {
            printf("\n%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{

    enqueue(2);
    enqueue(25);
    enqueue(36);
    printf("after insertion:\n");
    display();
    dequeue();
    dequeue();
    dequeue();
    printf("after dequeing: \n");

    display();

    return 0;
}
