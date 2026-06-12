#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,sum=0;
    printf("Enter the term number of fibocci:");
    scanf("%d",&n);
    if(n==1)
    printf("Term number %d is:%d",n,a);
    else if(n==2)
    printf("Term number %d is:%d",n,b);
    else
    {
        for(i=3;i<=n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("Term number %d is:%d",n,sum);
    }
    return 0;
}