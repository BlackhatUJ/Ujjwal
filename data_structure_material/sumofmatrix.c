#include <stdio.h>
void main()
{
    static int array[10][10];
    int i, j, m, n, sum = 0;
    printf("enter the order of the matrix\n");
    scanf("%d %d", &m, &n);

    printf("enter the co-efficeints of thr matrix\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            sum = sum + array[i][j];
        }
        printf("sum of the %d column is =%d\n", j, sum);
        sum = 0;
    }
}
