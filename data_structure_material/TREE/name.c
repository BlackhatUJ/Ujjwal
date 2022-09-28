#include <stdio.h>
int search(int a[], int n, int item)
{

    for (int i = 0; i < n; i++)
    {
        if ( item==a[i])
            return (i+1);
    }
    return -1;
}

int main()
{
    int i, N=3, a[N],result;
    // printf("enter the  number of elements :\n");
    // scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("enter the elements :");
        scanf("%d", &a[i]);
    }
    printf("elements in array form are:");
    for (i = 0; i < N; i++)
    {
        printf("%d  ", a[i]);
    }
        printf("\nenter the elementd to be searched  :");
    scanf("%d",&i);
    result = search(a, N, i);
    
    if (result == -1)
        printf("\n element is not present in the array");
    else
        printf("\nelement is present at %d location", result);
}
