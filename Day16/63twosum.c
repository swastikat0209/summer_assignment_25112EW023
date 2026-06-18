#include<stdio.h>
int main()
{
    int n,i,j,a,c=0;
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
    printf("\nEnter the number whose sum pair has to be found");
    scanf("%d",&a);
    printf("Following pairs are present:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==a)
            {
                printf("%d,%d\n",A[i],A[j]);
                c++;
            }
        }
    }
    if(c==0)
    printf("No pair exist");
}