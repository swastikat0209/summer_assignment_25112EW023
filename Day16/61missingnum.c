#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
        sum1+=A[i];
    }
    printf("Following is the ARRAY u entered\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    sum2=(n+2)*(n+1)/2;
    printf("\nThe missing number is:\n%d",sum2-sum1);
}