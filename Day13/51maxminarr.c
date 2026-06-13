#include<stdio.h>
int main()
{
    int n,i,loch=0,locl=0;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    int min=A[0],max=A[0];
    printf("Following is the ARRAY u entered\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
            loch=i;
        }
    }
    printf("\nLargest element of the Array is %d at %d index",max,loch);
    for(i=1;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            locl=i;
        }
    }
    printf("\nSmallest element of the Array is %d at %d index",min,locl);
    return 0;
}