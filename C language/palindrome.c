#include<stdio.h>
void main()
{int n,r,p,s;
printf("enter any value=");
scanf("%d",&n);
p=n;
while(n>0)
{s=n%10;
r=(r*10)+s;
n=n/10;}
printf("reverse number =%d",r);
if(p==r)
printf("number is palindrome number");
else
printf("number is not palindrome number");}