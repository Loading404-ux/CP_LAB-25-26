#include<stdio.h>
#include<math.h>
void main()
{
 int a,b,c;
 float A;
 printf("Enter three sides of Triangle :");
 scanf("%d%d%d",&a,&b,&c);
 if(a!=0 && b!=0 && c!=0)
 {
   float s=(a+b+c)/2;
   A=sqrt(s*(s*(s-a)*(s-b)*(s-c));
   printf("Area of the triangle is : %f",A);
 }
 else
 {
  printf("Area of the traingle is 0");
 }
}
