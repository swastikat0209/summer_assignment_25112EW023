#include<stdio.h>
int main()
{
   int n,rem;
   long long int sum=0,place=1;
   printf("Enter the nmber you want to convert:");
   scanf("%d",&n);
   while(n>0)
   {
      rem=n%2;
      sum=sum+rem*place;
      place=place*10;
      n=n/2;
   }
   printf("The number in binary is:%lld",sum);
   return 0;
}