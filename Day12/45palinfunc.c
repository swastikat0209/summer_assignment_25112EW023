#include<stdio.h>
void palin(int);
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    palin(a);
    return 0;
}
void palin(int n)
{
   int n2,rev=0,dig;
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
}