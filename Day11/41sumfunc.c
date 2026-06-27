#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum of both numbers is:%d",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}