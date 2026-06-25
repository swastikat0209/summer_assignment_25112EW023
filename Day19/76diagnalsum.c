#include<stdio.h>
int main()
{
    int i,j,n,diagsum=0;
    printf("Enter the order of Matrix:");
    scanf("%d",&n);
    int A[n][n];
    printf("\nEnter Array Elements:");
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
        for(j=0;j<n;j++)
        {
            if(j==i||i+j==n-1)
            {
                diagsum+=A[i][j];
            }
        }
    }
    printf("The diagonal sum is:%d",diagsum);
    return 0;
}