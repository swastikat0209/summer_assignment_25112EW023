#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
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
    return 0;
}     
    
