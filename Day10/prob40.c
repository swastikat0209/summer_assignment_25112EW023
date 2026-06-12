#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter number of rows:");
  scanf("%d",&n);
  for(i=65;i<n+65;i++)
  {
    for(j=1;j<n-i+65;j++)
    printf(" ");
  
    for(j=65;j<=i;j++)
    printf("%c",(char)j);

    for(j=i;j>65;j--)
    printf("%c",(char)(j-1));
    printf("\n");
  }
}