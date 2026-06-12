#include<stdio.h>
#include<math.h>
int main()
{
    int n,n2,temp,dig,count=0,sum=0;
    printf("Enter the number you want to check is armstrong or not:");
    scanf("%d",&n);
    n2=n;
    temp=n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    while(n2>0)
    {
         dig=n2%10;
         sum=sum+round(pow(dig,count));
         n2=n2/10;
    }
    if(sum==temp)
    printf("\nThe number is Armstrong");
    else
    printf("\nNot an Armstrong number");
}