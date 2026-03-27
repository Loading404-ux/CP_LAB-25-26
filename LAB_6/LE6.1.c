#include<stdio.h>
void main()
{
 int r1,r2;
 printf("Enter two numbers: ");
 scanf("%d%d",&r1,&r2);
 for(int i=r1;i<=r2;i++)
 {
   if(i%2==0)
   {
     printf("%d ",i);
   }
 }
 printf("\n");
}
