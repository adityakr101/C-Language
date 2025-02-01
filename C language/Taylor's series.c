#include<stdio.h>
int main()
{
int i, degree;
float x, sum=0,term,n;
printf("Enter the value of degree");
scanf("%d",&degree);
printf("Enter the limit upto which the Taylor's series is to be calculated:");
scanf("%f",&n);
x = degree * (3.1416/180);
term = x;
sum=term;
for (i=3;i<=n;i+=2)
{
term=-term*x*x/((i-1)*i);
sum=sum+term;
}
printf("The sine of %d is %.3 f\n", degree, sum);
printf("The sine function of %d using library function is %.3 f", degree, sin(x)); 
return 0;
}