#include<stdio.h>
void main()
{int i,j,k=1;
for(i=1;i<=4;i++)
{for(j=1;j<=i;j++)
printf("%-5d",k++);
printf("\n");}}