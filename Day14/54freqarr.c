#include<stdio.h>
int main()
{
    int n,i,a,count=0;
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
    printf("\nEnter the element whose frequency u want to check:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(A[i]==a)
        count++;
    }
    printf("Frequency of %d is %d",a,count);
    return 0;
}