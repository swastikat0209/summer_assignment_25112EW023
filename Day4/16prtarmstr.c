#include<stdio.h>
#include<math.h>
int main()
{
    int l,u,i,n,temp,dig,count=0,sum=0;
    printf("Enter lower limit\n");
    scanf("%d",&l);
    printf("Enter upper limit\n");
    scanf("%d",&u);
    printf("Following armstrong numbers lie in this range:\n");
    for(i=l;i<=u;i++)
    {
        sum=0;
        count=0;
        temp=i;
        n=i;
        while(temp>0)
        {
            temp=temp/10;
            count++;
        }
        while(n>0)
        {
            dig=n%10;
            sum=sum+round(pow(dig,count));
            n=n/10;
        }
        if(sum==i)
        printf("%d\t",sum);
    }
    return 0;
}