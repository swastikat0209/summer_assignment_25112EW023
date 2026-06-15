#include<stdio.h>
int main()
{
    int n,i,j,a,temp;
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
    printf("\nEnter by how many terms you want to rotate the array:");
    scanf("%d",&a);
    a=a%10;
    for(i=0;i<a;i++)
    {
        temp=A[0];
        for(j=0;j<n-1;j++)
        {
            A[j]=A[j+1];
        }
        A[n-1]=temp;
    }
    printf("Following is the ARRAY with %d rotated terms to the left\n",a);
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    return 0;
}