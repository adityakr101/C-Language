#include<stdio.h>
void main()
{int a[10],b[10],c[20];
int i,n1,n2,m,index=0;
printf("enter size of a:");
scanf("%d",&n1);
printf("enter size of b:");
scanf("%d",&n2);
printf("enter a elements:");
for(i=0;i<n1;i++)
{scanf("%d",&a[i]);}
printf("enter b elements:");
for(i=0;i<n2;i++)
{scanf("%d",&b[i]);}
m=n1+n2;
for(i=0;i<n1;i++)
{c[index]=a[i];
index++;}
for(i=0;i<n2;i++)
{c[index]=b[i];
index++;}
printf("\n merged array:");
for(i=0;i<m;i++)
{printf("%d",c[i]);}
}

