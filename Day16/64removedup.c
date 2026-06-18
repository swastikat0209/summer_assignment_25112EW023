#include<stdio.h>
int main()
{
    int n,i,j,count;
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
    printf("\nFollowing is the ARRAY with no duplicates\n");
    for(i=0;i<n;i++)
    {
       count=0;
       for(j=0;j<i;j++)
       {
         if(A[i]==A[j])
            {
               count++;
               break;
            }
       }
       if(count!=0)
       continue;
       printf("%d\t",A[i]);
    }
}