#include<stdio.h>
#include<math.h>
int number(int n) ;
int main()
{int n;
printf("enter binary number=");
scanf("%d",&n);
printf("the decimal no.of %d is=%d",n,number(n));
return 0;}
int number(int n)
{int r,d=0,base=1;
while(n>0)
{r=n%10;
d=d+r*base;
n=n/10;
base=base*2;}
return d;}