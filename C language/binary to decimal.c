#include<stdio.h>
void main()
{int n,r,d=0,base=1;
printf("enter binary number=");
scanf("%d",&n);
while(n>0)
{r=n%10;
d=d+r*base;
n=n/10;
base=base*2;}
printf("decimal=%d",d);}