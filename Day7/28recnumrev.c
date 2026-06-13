#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Revese of the number is:");
    rev(n);
    return 0;
}
int rev(int n)
{
    if(n==0)
    return 0;
    else
    {
        printf("%d",n%10);
        return rev(n/10);
    }
}