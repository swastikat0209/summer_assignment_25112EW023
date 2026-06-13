#include<stdio.h>
#include<math.h>
int main()
{
    int long long n,count=0,rem,n2,i,sum=0;
    printf("Enter a binary number:");
    scanf("%lld",&n);
    n2=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=n2;
    for(i=0;i<count;i++)
    {
        if(n2%10!=0)
        sum+=pow(2,i);
        n2=n2/10;
    }
    printf("The number %lld is %lld",n,sum);
}