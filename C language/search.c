#include<stdio.h>
void main()
{int a[9]={2,8,14,32,66,100,104,200,400};
int n=5,i=0,key;
printf("enter element to searched:");
scanf("%d",&key);
while(i<n)
{if(a[i]==key)
break;
i++;}
printf("elements %d is at position %d\n",key,i);

}