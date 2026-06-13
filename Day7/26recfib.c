#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of terms of fibonacci:");
    scanf("%d",&n);
    printf("Below is the fibonacci with desired number of terms:\n");
    for(i=0;i<n;i++)
    printf("%d\t",fib(i));
    return 0;
}
int fib(int n)
{
    if(n==1||n==0)
    return n;
    else
    return fib(n-1)+fib(n-2);
}