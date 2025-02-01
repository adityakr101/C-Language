#include<stdio.h>

int Biggest(int a,int b,int c);
int main()
{int x,y,z; 
printf("Enter the three numbers\n");
scanf("%d%d%d",&x,&y,&z);
printf("The biggest number among %d %d %d is %d\n",x,y,z,Biggest(x,y,z));
return 0;}

int Biggest(int a,int b,int c)
{if(a>b && a>c)
return a;
else if(b>a && b>c)
return b;
else
return c;}