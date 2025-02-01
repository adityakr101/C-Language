#include<stdio.h>
void main()
{int a[50],i,j,k,n;
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements of array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter position of element to be deleted:");
scanf("%d",&k);
j=k;
while(j<n-1)
{a[j]=a[j+1];
j++;}
printf("elements of array:\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
}