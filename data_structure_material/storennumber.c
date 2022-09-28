#include <stdio.h>
int main()
{
    int array[100], n, s;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("array[%d]= ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search in the array : ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)  //using for loop for checking individual element
    {                            //if element matches the required number
        if (array[i] == s)       //loop stops and stores n=1
        {
            printf("\nThe search for %d in array is completed\n\nAnd there is a match found!!\n\nThe %d element of array is same.\n", s, i);
            n = 1;
            break;
        }
        else
            continue;
    }                         //if n!=1 means there is no matching element       
    if (n != 1)                
        printf("\nThe search for %d in array is completed\n\nAnd there is no match found!!\n", s);
    return 0;
}

