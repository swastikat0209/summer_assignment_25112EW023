#include<stdio.h>
int main()
{
    int n,i,j,a,count;
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
    printf("\nDuplicates of following elements are present:\n");
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
       count=0;
       for(j=0;j<n;j++)
       {
          if(j==i)
          continue;
          else
          {
            if(A[i]==A[j]&&j>i)
            {
               count++;
               break;
            }
          }
       }
          if(count!=0)
          printf("%d\t",A[i]);
    }
    return 0;
}