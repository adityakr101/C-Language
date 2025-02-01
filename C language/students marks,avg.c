#include<stdio.h>
void main()
{char opt;
float n1,n2,result;
printf("enter two numbers");
scanf("%f%f",&n1,&n2);
printf("enter an operator(+,-,*,/):");
scanf("%c",&opt);
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
printf("INVALID OPERATOR\n");
break;}
}