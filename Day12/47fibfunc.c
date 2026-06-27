#include<stdio.h>
void fib(int);
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Following is the series with entered number of terms:\n");
    fib(n);
    return 0;
}
void fib(int n)
{
    int i,a=0,b=1,sum=0;
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
}