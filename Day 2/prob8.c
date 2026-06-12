#include<stdio.h>
int main()
{
   int n,n2,rev=0,dig;
   printf("Enter the number\n");
   scanf("%d",&n);
   n2=n;
   while(n>0)
   {
    dig=n%10;
    rev=rev*10+dig;
    n=n/10;
   }
   if(n2==rev)
   printf("Number is palindrome");
   else
   printf("Not paindrome");
   return 0;
}