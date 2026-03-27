#include<stdio.h>
void main()
{
 float p,r;
 int t;
 printf("Enter PRINCIPAL :");
 scanf("%f",&p);
 printf("Enter RATE :");
 scanf("%f",&r);
 printf("Enter TIME in year :");
 scanf("%d",&t);
 float interest =(p*r*t)/100.0;
 printf("SIMPLE INTEREST: %f",interest);
}
