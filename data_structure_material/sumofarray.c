#include<stdio.h>
#define arraysize(a) sizeof(a)/sizeof(a[0])

int sumarray(int arr[], const int n)
{
if (n<=0)
{
    return 0;
}
return (sumarray(arr, n-1)+ arr[n-1]);

}
int main ()
{
    int arr[]= {1,2,3,4,5};
    const int n = arraysize(arr);
    printf("%d\n", sumarray(arr,n));
    return 0;
}