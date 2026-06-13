#include<stdio.h>
int main()
{
   int n,rem,count=0;
   long long int sum=0,place=1;
   printf("Enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
      rem=n%2;
      sum=sum+rem*place;
      place=place*10;
      n=n/2;
   }
   while(sum>0)
   {
      if(sum%10==1)
      count++;
      sum=sum/10;
   }
   printf("The number of bit sets in this number is:%d",count);
   return 0;
}