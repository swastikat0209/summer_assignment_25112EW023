#include<stdio.h>
void prime(int);
int main()
{
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int n)
{
    int i,count=0;
    if(n==0||n==1)
    printf("Not a prime number");
    else
    {
      for(i=2;i<=n/2;i++)
      {
         if(n%i==0)
         count++;
      }
      if(count==0)
      printf("Number is prime");
      else
      printf("Not a prime number");
    } 
}