#include<stdio.h>
int main()
{
    int n,i,j,temp,sloc;
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
        sloc=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[sloc])
            sloc=j;
        }
        temp=A[i];
        A[i]=A[sloc];
        A[sloc]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
}