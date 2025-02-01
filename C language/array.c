#include <stdio.h>
void main()
{int a[50],i,n;
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements in array:\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
//{sum=sum+a[i];}
{printf("%d ",a[i]);}
}