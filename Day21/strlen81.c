#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number of characters in String:");
    scanf("%d",&n);
    char s[n];
    printf("Enter a string:");
    scanf(" %[^\n]",&s);
    while(s[count]!='\0')
    count++;
    printf("Length of string is:%d",count);
    return 0;
}