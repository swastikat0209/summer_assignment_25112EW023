#include<stdio.h>
int main()
{
    int n1,n2,i,fact=0,min;
    printf("Enter the 2 numbers\n");
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    if(n1>=n2)
    min=n2;
    else
    min=n1;
    if(n1==1||n2==1)
    printf("1");
    for(i=2;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            fact=i;
            break;
        }
    }
    if(fact==0)
    printf("LCD=1");
    else
    printf("LCD=%d",fact);
}    