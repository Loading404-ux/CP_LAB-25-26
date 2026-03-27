#include<stdio.h>
void main()
{
  int pre,now,diff;
  float amt;
  re:
  printf("Enter the previous meter reading : ");
  scanf("%d",&pre);
  printf("Enter the current meter reading : ");
  scanf("%d",&now);
  diff=now-pre;
  if(diff<0)
  {
  printf("Wrong Input. \n Renter :\n");
  goto re;
  }else
  if(diff<=200)
  {
   amt=diff*0.8;
  }
  else
  if(diff<=300)
  {
    amt=200*0.8+(diff-200)*0.9;
  }
  else
  if(diff>300)
  {
    amt=200*0.8+100*0.9+(diff-300)*1;
  }
  
  amt=amt+100.0;
  if(amt>400.0)
  {
    amt=1.5*amt;
  }
  
  printf("TOTAL AMOUNT : %.2f\n",amt);
  
  
}
