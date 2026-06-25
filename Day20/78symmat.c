#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("Enter the order of Matric which you want to check:");
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
            if(A[i][j]!=A[j][i])
            {
                count++;
                break;
            }
        }
        if(count!=0)
        break;
    }
    if(count!=0)
    printf("Not symmetric matrix");
    else
    printf("Symmetric Matrix");
    return 0;
}