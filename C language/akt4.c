#include<stdio.h>
void main()
{int n,p,sum=0;
printf("enter a number=");
scanf("%d",&n);
while(n>0)
{p=n%10;
sum=sum+p;
n=n/10;}
printf("sum of digit=%d",sum);}