#include<stdio.h>
void main()
{int n,i,j,k,l;
printf("Enter the number of rows to be printed:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(k=n;k>=i;k--)
printf(" ");
for(j=1;j<=i;j++)
printf("%d",j);
for(l=j-2;l>0;l--)
printf("%d",l);
printf("\n");
}}