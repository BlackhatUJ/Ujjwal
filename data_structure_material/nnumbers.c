#include <stdio.h>
int main()
{
    int arr[100], n, a, s;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\nEnter the elements of array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) //if arr[i] is bigger than arr[i+1], then they will interchange their position.
    {                                   //and moves to next value
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
        }
    }
    printf("\nThe array in ascending order is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)  //if arr[i] is less than arr[i+1],then they will interchange positions.
    {                                     //and moves to next value.    
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
        }
    }
    printf("\n\nThe array in descending order is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printf("Enter the number you want to search in the array : ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)  //using for loop for checking individual element
    {                            //if element matches the required number
        if (arr[i] == s)       //loop stops and stores n=1
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
    printf("\n\n");    
    return 0;
}
