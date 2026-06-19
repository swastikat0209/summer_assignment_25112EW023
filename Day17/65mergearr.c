#include<stdio.h>
int main()
{
    int n1,n2,i;
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
    int C[n1+n2];
    printf("\nMerged Array is:\n");
    for(i=0;i<n1;i++)
    C[i]=A[i];
    for(i=0;i<n2;i++)
    C[n1+i]=B[i];
    for(i=0;i<n1+n2;i++)
    printf("%d\t",C[i]);
    return 0;
}