#include<stdio.h>
#include<string.h>
void main()
{char str[50];
int i,len,flag=0;
printf("enter the string:");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{if(str[i]!=str[len-i-1])
{flag=1;
break;}}
if(flag==0)
{printf("\n %s is a pallindrome string",str);}
else
{printf("\n %s is a not pallindrome string",str);}
}