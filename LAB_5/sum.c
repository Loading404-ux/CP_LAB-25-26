#include<stdio.h>
void main()
{
 int n;
 int sum=0;
 printf("Enter a number :");
 scanf("%d",&n);
 while(n!=0)
 {
 int a=n%10;
 sum=sum+a;
 n=n/10;
 }
 printf("SUM :%d",sum);
}
