#include<stdio.h>
int n,choice=0,i,j;
void bubblesort();
void selectionsort();
void insertionsort();
void main()
{
    printf("enter the number of elements in thestack");
    scanf("%d", &n);
    printf("stack operations using array");

    printf("\n--------------------------------\n");
     while (choice != 4)
    {
        printf("chose one from thr below options\n");
        printf("\n 1- bubble sort\n 2- selection sort\n 3- insertion sort\n 4- exit");
        printf("\nenter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
            bubblesort() ;
            break;
            }
            case 2:
            {
            selectionsort();
            break;
            }
            case 3:
            {
            insertionsort();
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
 