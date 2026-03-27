#include<stdio.h>
void main()
{
 int PR,CR,r;
 double bill=0.0;
 printf("Enter the previous meter reading : ");
 scanf("%d",&PR);
 printf("Enter the current meter reading : ");
 scanf("%d",&CR);
 r=CR-PR;
  if(r>=100)
   {
     bill=bill+100.0*1.40;
     r-=100;
   }
    else
  {
   bill=bill+r*1.40;
   r=0;
  }
  if(r>0)
  {
     if(r>=100)
     {
  	bill=bill+100.0*2.50;
  	r-=100;
     }
     else
     {
  	bill=r*2.50;
  	r=0;
     }
  }
  if(r>0)
  {
  bill=bill+r*3.20;
  r=0;
  }
  printf("Bill Amount: %.2f\n",bill);
}
