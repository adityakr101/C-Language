#include<stdio.h>
void main()
{int n1,n2;
printf("enter two number=\n");
scanf("%d%d",&n1,&n2);
if(n1>n2)
printf("%d is greather than %d",n1,n2);
else if(n1<n2)
printf("%d is less than %d",n1,n2);
else
printf("%d is equal to %d",n1,n2);}