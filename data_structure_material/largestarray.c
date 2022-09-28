#include <stdio.h>
int main()
{
    int arr[100], n, num, num2;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    num=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (num > arr[i + 1])
            num = arr[i + 1];
    }
    printf("\n\nThe smallest number in the array is %d\n\n", num);
    num2=arr[0];
    for (int j = 0; j < n; j++)
    {
        if (num2 < arr[j + 1])
            num2 = arr[j + 1];
    }
    printf("The biggest number in the array is %d\n\n", num2);
    return 0;
}
