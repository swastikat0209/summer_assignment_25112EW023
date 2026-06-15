#include<stdio.h>
int main()
{
    int n,i,j,temp;
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(A[i]==0&&A[j]!=0)
        {
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
        
    }
    printf("Following is the ARRAY with zeros at the end\n");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    return 0;
}