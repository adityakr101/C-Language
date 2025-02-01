#include<stdio.h>
float Sim(float a,float r,float t);
int main()
{float a,r,t;
printf("Enter the amount,rate & time\n");
scanf("%f%f%f",&a,&r,&t);
printf("The simple interst of %f amount is %f\n",a,Sim(a,r,t));
return 0;
}
float Sim(float a,float r,float t)
{float result;
result=(a*t*r)/100;
return result;}