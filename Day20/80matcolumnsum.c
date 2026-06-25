#include<stdio.h>
int main()
{
    int r,c,i,j,colmsum;
    printf("Enter number of rows of Matrix:");
    scanf("%d",&r);
    printf("Enter number of columns of Matrix:");
    scanf("%d",&c);
    int A[r][c];
    printf("Enter Elements of Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Following is the Matrix entered:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",A[i][j]);
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        colmsum=0;
        for(j=0;j<r;j++)
        colmsum+=A[j][i];
        printf("\nSum of elements of %d column = %d",i+1,colmsum);
    }
}
