#include<stdio.h>
int max(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Maximum of both numbers is:%d",max(a,b));
    return 0;
}
int max(int a,int b)
{
    int big;
    if(a>b)
    big=a;
    else
    big=b;
    return big;
}