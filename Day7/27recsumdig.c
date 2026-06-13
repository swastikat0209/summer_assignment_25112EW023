#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n%10+sum(n/10);
}