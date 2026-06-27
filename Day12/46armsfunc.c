#include<stdio.h>
void arm(int);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    arm(a);
    return 0;
}
void arm(int n)
{
    int n2,temp,sum=0,dig,count=0;
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