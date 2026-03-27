#include<stdio.h>
void main()
{
  int m,h;
  float dis1,dis2,net1,net2,net;
  re_m:
  printf("Enter the purchase amount for mild cloth :");
  scanf("%d",&m);
  re_h:
  printf("Enter the purchase amount for Handloom items :");
  scanf("%d",&h);
  switch(m)
  {
   case 0 ... 100:
   dis1=0;
   break;
   case 101 ... 200:
   dis1=0.05*m;
   break;
   case 201 ... 300:
   dis1=0.75*m;
   break;
   case 301 ... 999999:
   dis1=0.1*m;
   break;
   default:
   printf("Enter a valid amount \n");
   goto re_m;
  }
  switch(h)
  {
   case 0 ... 100:
   dis2=0.05*h;
   break;
   case 101 ... 200:
   dis2=0.75*h;
   break;
   case 201 ... 300:
   dis2=0.1*h;
   break;
   case 301 ... 999999:
   dis2=1.5*h;
   break;
   default:
   printf("Enter a valid amount \n");
   goto re_h;
  }
  net1=m-dis1;
  net2=h-dis2;
  net=net1+net2;
  printf("NET PAYABLE AMOUNT :%.2f ",net);
  
}
