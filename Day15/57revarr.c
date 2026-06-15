#include<stdio.h>
int main()
{
    int n,temp,i;
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
    printf("\nReverse of the array is:\n");
    int j=n-1;
    i=0;
    while(i<n/2)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    return 0;
}