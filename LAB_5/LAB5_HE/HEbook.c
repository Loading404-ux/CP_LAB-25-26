#include<stdio.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0

void main()
{
  int level;
  float h_r,gross,basic,house_rent,perks,net ,i_t;
  long j_n;
  printf("Enter the JOB number of employee :");
  scanf("%ld",&j_n);
  printf("Enter the Basic pay of employee :");
  scanf("%f",&basic);
  new:
  printf("Enter the Level of the employee :");
  scanf("%d",&level);
  switch(level)
  {
  case 1:
  perks=EA1+CA1;
  break;
  case 2:
  perks=EA2+CA2;
  break;
  case 3:
  perks=EA3+CA3;
  break;
  case 4:
  perks=EA4+CA4;
  break;
  default:
  printf("Wrong Input");
  printf("Enter the NEW INPUT:");
  goto new;
  }
  h_r=0.25*basic;
  gross=basic+h_r+perks;
  if(gross<=2000)
    i_t=0.0;
    else
     if(gross>2000 && gross<=4000)
       i_t=0.03*gross;
         else
           if(gross>4000 && gross<=5000)
             i_t=0.05*gross;
              else
                if(gross>=5000)
                  i_t=0.08*gross;
   
   //calculation
   
   net =gross-i_t;
   printf("NET AMOUNT : %f",net);
}
