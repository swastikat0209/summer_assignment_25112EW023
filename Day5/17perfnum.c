#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number you want to chack is PERFECT or not:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("PERFECT NUMBER");
    else 
    printf("NOT a Perfect Number");
    return 0;
}