#include<stdio.h>
void main()
{int a=10;
int *ptr;
ptr=&a;
printf("the value of a is %d\n",a);
printf("the address of pointer to a is %d\n",&ptr);}