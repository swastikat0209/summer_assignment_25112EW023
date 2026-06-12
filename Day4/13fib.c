#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Following is the series with entered number of terms:\n");
    if(n<=0)
    printf("NO TERM FOUND");
    else if(n==1)
    printf("%d",a);
    else if(n==2)
    printf("%d %d",a,b);
    else
    {
        printf("%d %d ",a,b);
        for(i=3;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
            printf("%d ",sum);
        }
    }
    return 0;
}
