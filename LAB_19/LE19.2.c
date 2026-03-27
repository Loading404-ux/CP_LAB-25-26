#include<stdio.h>

struct distance
{
  int km;
  int m;
};

void main()
{ 
 struct distance t[2];
 printf("Enter data for first distance:\n");
 printf("Enter km:");
 scanf("%d",&t[0].km);
 printf("Enter meter:");
 scanf("%d",&t[0].m);
 printf("Enter data for second distance:\n");
 printf("Enter km:");
 scanf("%d",&t[1].km);
 printf("Enter meter:");
 scanf("%d",&t[1].m);
 
 int sum_meter=t[0].m+t[1].m;
 int sum_km=t[0].km+t[1].km;
 if(sum_meter>=1000)
 {
   int a=sum_meter%1000;
   sum_meter/=1000;
   sum_km+=a;
 }
 
 printf("Sum of the distances = %d km %d m",sum_km,sum_meter);
}
