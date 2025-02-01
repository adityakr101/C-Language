#include<stdio.h>
void main()
{char opt;
float n1,n2,result;
printf("choose an operator +,-,*,/:");
scanf("%c",&opt);
printf("enter a number:");
scanf("%f",&n1);
printf("enter a second number:");
scanf("%f",&n2);
switch(opt)
{case'+':
result=n1+n2;
printf("%f+%f=%f\n",n1,n2,result);
break;
case'-':
result=n1-n2;
printf("%f-%f=%f\n",n1,n2,result);
break;
case'*':
result=n1*n2;
printf("%f*%f=%f\n",n1,n2,result);
break;
case'/':
result=n1/n2;
printf("%f/%f=%f\n",n1,n2,result);
break;
default:
printf("invalid operation");
}
}
