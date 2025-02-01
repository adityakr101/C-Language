#include <stdio.h>
void main()
{int a[50],i,j,k,n,item;
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements of array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter number to be inserted:");
scanf("%d",&item);
printf("enter position of element to be inserted:");
scanf("%d",&k);
j=n-1;
n++;
while(j>=k)
{a[j+1]=a[j];
j=j-1;}
a[k]=item;
printf("elements of array:\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}