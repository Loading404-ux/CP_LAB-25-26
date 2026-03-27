#include<stdio.h>
void main()
{ 
   int n;
   int fact=1;
   printf("Enter a number: ");
   scanf("%d",&n);
   int temp=n;
   while(n!=0)
   {
     fact=fact*n;
     n--;
   }
   printf("Factorial of %d = %d\n",temp,fact);
}
