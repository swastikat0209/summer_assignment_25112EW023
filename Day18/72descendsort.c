#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("Following is the ARRAY u entered\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\nSorted array is:\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]<A[j+1])
            {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
}