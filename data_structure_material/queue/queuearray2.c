#include<stdio.h>
#define size 100
int queue[size];
int front=-1;
int rear=-1;
void enqueue(char data)
{
    if(rear==size-1)
    {
        printf("OVERFLOW!");
    }
    else if(front==-1&& rear==-1)
    {
        front=rear=0;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 &&rear==-1)
    {
        printf("underflow!");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i=front;i<rear+1;i++)
        {
            printf("%d\n",queue[i]);
        }
    }

}
void main()
{
    printf("after the enqueue:\n");
    enqueue(20);
    enqueue(30);
    enqueue(60);
    display();
    dequeue();
    printf("after the dequeue:\n");
    display();
}