#include<stdio.h>
void main()
{
  int n;
  int sum=0;
  printf("Enter 10 integers:");
  for(int i=1;i<=10;i++)
   {
     scanf("%d",&n);
     sum+=n;
   }
   float avg=sum/10;
   printf("The sum is %d. The average is %.2f\n",sum,avg);
}
