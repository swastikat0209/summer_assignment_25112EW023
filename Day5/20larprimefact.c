#include<stdio.h>
int main()
{
    int n,i,j,count,lar,fact;
    printf("Enter lower limit\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {  
        if(n%i==0)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                count++;
            }
            if(count==0)
            lar=i;
        }
    } 
    printf("Largest prime factor is:%d",lar);
    return 0;
}     