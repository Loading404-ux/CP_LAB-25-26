#include<stdio.h>
void main()
{
 int s1,s2,s3,s4,s5;
 printf("Enter the marks in five subjects out of 200: ");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 int avg=(s1+s2+s3+s4+s5)/5;
 float per=(avg/200.0)*100.0;
 printf("The average mark is %d \n",avg);
 printf("Percentage is %.2f \n", per);
}
 
