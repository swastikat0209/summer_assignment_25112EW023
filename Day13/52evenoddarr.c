#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
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
    {
        printf("%d\t",A[i]);
        if(A[i]%2==0)
        even++;
        else
        odd++;
    }    
    printf("\nNumber of even terms=%d",even);    
    printf("\nNumber of odd terms=%d",odd);    
}