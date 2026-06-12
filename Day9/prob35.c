#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter number of rows:");
  scanf("%d",&n);
  for(i=65;i<(65+n);i++)
  {
    for(j=65;j<=i;j++)
    printf("%c",(char)i);
    printf("\n");
  }
}