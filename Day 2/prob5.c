#include<stdio.h>
int main()
{
  int i,n,sum=0,dig;
  printf("Enter the number\n");
  scanf("%d",&n);
  while(n>0)
  {
    dig=n%10;
    sum=sum+dig;
    n=n/10;
  }
  printf("The sum of the digits is %d\n",sum);
  return 0;
}