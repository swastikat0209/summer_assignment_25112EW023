#include<stdio.h>
int main()
{
    int n,i;
    float avg,sum=0;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    avg=sum/n;
    printf("Following is the ARRAY u entered\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\nSUM OF ARRAY ELEMENTS=%.0f AND THEIR AVERAGE=%.2f",sum,avg);
}