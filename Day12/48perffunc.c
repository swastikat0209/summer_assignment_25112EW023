#include<stdio.h>
void perf();
int main()
{
    int n;
    printf("Enter the number you want to chack is PERFECT or not:");
    scanf("%d",&n);
    perf(n);
    return 0;
}
void perf(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    printf("PERFECT NUMBER");
    else 
    printf("NOT a Perfect Number");
}