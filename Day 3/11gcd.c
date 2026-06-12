#include<stdio.h>
int main()
{
    int n1,n2,i,fact,min;
    printf("Enter the 2 numbers\n");
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    if(n1>n2)
    min=n2;
    else
    min=n1;
    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        fact=i;
    }
    printf("GCD=%d",fact);
}    