#include<stdio.h>
void main()
{char opt;
float n1,n2,result;
printf("choose an operator('+,-,*,/'):");
scanf("%c",&opt);
printf("enter two number=\n");
scanf("%f%f",&n1,&n2);
switch(opt)
{case '+':
result=n1+n2;
printf("%f+%f=%f",n1,n2,result);
break;
case '-':
result=n1-n2;
printf("%f-%f=%f",n1,n2,result);
break;
case '*':
result=n1*n2;
printf("%f*%f=%f",n1,n2,result);
break;
case '/':
result=n1*n2;
printf("%f/%f=%f",n1,n2,result);
break;

default:
        printf("operator is not work");}}