#include<stdio.h>
int main()
{
    int n,i,loc=-1,a;
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
    printf("\nEnter the element u want to search:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(A[i]==a)
        loc=i;
    }
    if(loc==-1)
    {
        printf("NO SUCH ELENT FOUND\n");
        printf("SEARCH UNSUCCESSFUL");
    }
    else
    {
        printf("SEARCH SUCCESSFUL");
        printf("\nELEMENT FOUND AT INDEX NUMBER %d",loc);
    }
    return 0;
}