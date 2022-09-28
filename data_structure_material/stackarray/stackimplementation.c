#include <stdio.h>
int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void show();

void push()
{
    int value;
    if(top==n)
    printf("\n overflow");
    else
    {
        printf("enter the value ");
        scanf("%d",&value);
        top = top+1;
        stack[top]=value;

    }
}
void pop()
{
    if (top==-1)
    
        printf("underflow");
        else
        
            top= top-1;   
}
void show()
{
    if(top==-1)
    {
        printf("##stack is empty##\n");
    }
    for(i=top;i>=0;i--)
    {
        printf(" the stack is : %d\n",stack[i]);
    }
    
}
void main()
{
    printf("enter the number of elements in thestack");
    scanf("%d", &n);
    printf("stack operations using array");

    printf("\n--------------------------------\n");

    while (choice != 4)
    {
        printf("chose one from thr below options\n");
        printf("\n 1- push\n 2- pop\n 3- show\n 4- exit");
        printf("\nenter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
            push() ;
            break;
            }
            case 2:
            {
            pop();
            break;
            }
            case 3:
            {
            show();
            break;
            }
            case 4:
            {
            printf("exit");
             break;
            }
            default:
            {
            printf("please enter the vailid choice");
            }
        };
    }
}