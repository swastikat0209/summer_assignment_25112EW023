#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("Enter number of rows of Matrix A:");
    scanf("%d",&r1);
    printf("Enter number of columns of Matrix A:");
    scanf("%d",&c1);
    int A[r1][c1];
    printf("Enter number of rows of Matrix B:");
    scanf("%d",&r2);
    printf("Enter number of columns of Matrix B:");
    scanf("%d",&c2);
    int B[r2][c2];
    if(c1!=r2)
    printf("\nPlease check if number of columns Matrix A equals number of rows of Matrices B and try again");
    else
    {
    printf("Enter Elements of Matrix A:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        printf("A[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
        }
    }
    printf("Following is Matrix A:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        printf("%d\t",A[i][j]);
        printf("\n");
    }
    printf("\nEnter Elements of Matrix B:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("B[%d][%d]:",i,j);
        scanf("%d",&B[i][j]);
        }
    }
    printf("Following is Matrix B:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d\t",B[i][j]);
        printf("\n");
    }
    int C[r1][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
            C[i][j]+=A[i][k]*B[k][j];
        }
    }
    printf("Following is Multiplication Matrix of A and B:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d\t",C[i][j]);
        printf("\n");
    }
    }
    return 0;
}