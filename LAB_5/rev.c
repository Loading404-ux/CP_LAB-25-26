#include<stdio.h>
void main()
{
 int n;
 int rev=0;
 printf("Enter a number :");
 scanf("%d",&n);
 while(n!=0)
 {
 int a=n%10;
 rev=rev*10+a;
 n/=10;
 }
 printf("REVERSE NUMBER :%d\n",rev);
}
