#include<stdio.h>
int main()
{
    int n,count=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
        while(n>0)
        {
         n=n/10;
         count++;
         }
    printf("Number of digits in %d is %d",temp,count);
    return 0;
}