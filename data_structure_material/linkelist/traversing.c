#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *temp= head;
    printf("list of the elements are- \n");
    while (temp != NULL)
    {
        printf("%d-->",temp->value);
        temp = temp->next;
    }
    
    
}
