#include<stdio.h>

int main()
{int x,n,result=1;
printf("Enter the number\n");
scanf("%d",&x);
printf("Enter the power\n");
scanf("%d",&n);


for(int i=1;i<=n;i++)
result*=x;
printf("The value of %d to the power %d is %d",x,n,result);
return 0;}