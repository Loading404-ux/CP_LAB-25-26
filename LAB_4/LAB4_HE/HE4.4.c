#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter the three sides of the Triangle :");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b && b==c && a==c)
 printf(" Equilateral \n");
 else
 if(a!=b && b!=c && a!=c)
 printf(" Scalene\n");
 else
 if(a==b||a==c||b==c)
 printf(" Isosceles\n");
}
