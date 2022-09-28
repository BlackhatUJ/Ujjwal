#include<stdio.h>
int main()
{
    int m, n, matrix[10][10];
    float check=0,sum=0;
    printf("Enter the order of the matrix : ");
    scanf("%d %d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
            {
               printf("a[%d][%d]= ",i+1,j+1);
               scanf("%d",&matrix[i][j]);
               sum=sum+1;   
            }
    }
    printf("\nThe matrix created is :\n");
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
            {
               printf("%d ",matrix[i][j]);
            }
        printf("\n");
    }
    printf("\nLets check if it is sparse matrix or not!\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            check=check+1;
            else
            continue;
        }
    }
    if (check>sum/2)
    printf("\nThe given matrix is sparse!!\n\n");
    else
    printf("\nThe given matrix is not sparse!!\n\n");
}
