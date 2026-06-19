#include<stdio.h>
int main()
{
    int n1,n2,i,j,count,k=0;
    printf("Enter number of elements in the 1st Array:");
    scanf("%d",&n1);
    int A[n1];
    printf("Enter Elements of Array 1:\n");
    for(i=0;i<n1;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("Following is ARRAY 1:\n");
    for(i=0;i<n1;i++)
    printf("%d\t",A[i]);
    printf("\nEnter number of elements in the 2nd Array:");
    scanf("%d",&n2);
    int B[n2];
    printf("\nEnter Elements of Array 2:\n");
    for(i=0;i<n2;i++)
    {
        printf("B[%d]:",i);
        scanf("%d",&B[i]);
    }
    printf("Following is ARRAY 2:\n");
    for(i=0;i<n2;i++)
    printf("%d\t",B[i]);
    printf("\nIntersection of Array is:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(A[i]==B[j])
            {
                k++;
                break;
            }
        }
    }
    int C[k];
    k=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(A[i]==B[j])
            {
                C[k]=A[i];
                k++;
                break;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        count=0;
        for(j=0;j<i;j++)
        {
            if(C[i]==C[j])
            count++;
        }
        if(count!=0)
        continue;
        printf("%d\t",C[i]);
    }
    return 0;
}