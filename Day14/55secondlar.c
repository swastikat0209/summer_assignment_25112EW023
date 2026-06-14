#include<stdio.h>
int main()
{
    int n,i,loch=0;
    printf("Enter number of elements in the Array:");
    scanf("%d",&n);
    int A[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    int max=A[0],max2=A[0];
    printf("Following is the ARRAY u entered\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    for(i=1;i<n;i++)
    {
        if(max2<A[i]&&A[i]!=max)
        {
            max2=A[i];
            loch=i;
        }
    }
    printf("\nSecond largest element in this array is %d at index number %d",max2,loch);
    return 0;
}