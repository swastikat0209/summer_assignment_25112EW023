#include<stdio.h>
int main()
{
    int l,u,i,j,count;
    printf("Enter lower limit\n");
    scanf("%d",&l);
    printf("\nEnter upper limit\n");
    scanf("%d",&u);
    printf("Following prime numbers lie in this range:\n");
    for(i=l;i<=u;i++)
    {   count=0;
        for(j=1;j<=i;j++)
        {
          if(i%j==0)
          count++;
        }
        if(count==2)
        {
          printf("%d\t",i);
        }  
    } 
    return 0;
}     