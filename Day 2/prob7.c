#include<stdio.h>
int main()
{
  int i,n,prod=1,dig;
  printf("Enter the number\n");
  scanf("%d",&n);
  while(n>0)
  {
    dig=n%10;
    prod*=dig;
    n=n/10;
  }
  printf("The product of the digits is %d\n",prod);
  return 0;
}