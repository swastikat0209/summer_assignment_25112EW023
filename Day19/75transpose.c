#include<stdio.h>
int main()
{
    int i,j,n,count=0,swap;
    printf("Enter the order of Matric which you want to check:");
    scanf("%d",&n);
    int A[n][n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Following is the Matrix entered:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",A[i][j]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           swap=A[i][j];
           A[i][j]=A[j][i];
           A[j][i]=swap;
        }
    }
    printf("Transpose of above Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}