#include<stdio.h>
int fact(int n);
void main()
{int n,res;
printf("enter a number:");
scanf("%d",&n);
res=fact(n);
printf("factorial of %d is %d",n,res);}
int fact(int n)
{if(n==1)
return 1;
else
return (n*fact(n-1));}