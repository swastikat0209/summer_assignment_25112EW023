#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    printf("Factorial of the number is:%d",fact(a));
}
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}