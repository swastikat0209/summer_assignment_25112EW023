#include<stdio.h>
int main()
{
    int n,n2,dig,fact,i,sum=0;
    printf("Enter a number to check is STRONG or not:");
    scanf("%d",&n);
    n2=n;
    while(n2>0)
    {
        fact=1;
        dig=n2%10;
        for(i=1;i<=dig;i++)
        fact*=i;
        sum+=fact;
        n2=n2/10;
    }
    if(n==sum)
    printf("STRONG NUMBER");
    else
    printf("Not a STRONG NUMBER");
}