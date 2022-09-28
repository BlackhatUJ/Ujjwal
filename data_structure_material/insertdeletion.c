#include <stdio.h>
int main()
{
    int a1[100], n, position, new;
    printf("Enter the number of elements in a1 array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a1[%d]= ", i);
        scanf("%d", &a1[i]);
    }
    printf("Enter the position where you want to enter the element : ");
    scanf("%d", &position);
    printf("Enter the new element here : ");
    scanf("%d", &new);
    for (int i = n; i >= position; i--)  //moving forward from n till we reach         the position,  
    {                                    //eg-: n=10 then i=10 and 'i' is greater than position which is suppose '5'
        a1[i] = a1[i - 1];               //then a1[10]= a1[10-1], we are storing value of a[9] in a[10]
    }                                    //remember array starts from 0, i.e if we are saying n=10 then there are 11 elements in the array. 
    a1[position - 1] = new;              
    printf("The updated array is :\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", a1[i]);
    }
    printf("\nEnter the position where you want to delete the element : ");
    scanf("%d", &position);
    for (int i = position - 1; i < n; i++)
    {
        a1[i] = a1[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a1[i]);
    }
    return 0;
}
