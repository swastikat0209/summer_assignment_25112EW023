#include<stdio.h>
int main()
{
    int p,i;
    float n,pow=1;
    printf("Enter a number:");
    scanf("%f",&n);
    printf("Enter the power of the number:");
    scanf("%d",&p);
    if(p==0)
    printf("Your answer is:1.0");
    else if(p>0)
    {
        for(i=1;i<=p;i++)
        pow*=n;
        printf("Your answer is:%.1f",pow);
    }
    else
    {
        p=-p;
        for(i=1;i<=p;i++)
        pow*=1/n;
        printf("Your answer is:%.3f",pow);
    }
}