#include<stdio.h>

struct time
{
  int day;
  int month;
  int year;
     
      struct add
      {
        int a_day;
        int a_month;
        int a_year;
      }ADD;
};

typedef unsigned int DATE;

void predit(struct time t)
{

  //1-DAY ADD
  
 DATE temp_day=t.day;
 DATE temp_month=t.month;
 DATE temp_year=t.year;
 
 temp_day+=1;
 if(temp_day>=30)
 {
   temp_month++;
   if(temp_month>12)
   {
     temp_year++;
     temp_month-=12;
   }
   temp_day-=30;
 }
 printf("Next day is :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
  //1-MONTH ADD
  
  temp_day=t.day;
  temp_month=t.month;
  temp_year=t.year;
 
 temp_month+=1;
 if(temp_month>=12)
 {
   temp_year++;
   temp_month-=12;
 }
 printf("Next month is :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
 //1-YEAR ADD
 
  temp_day=t.day;
  temp_month=t.month;
  temp_year=t.year;
  
  temp_year++;
 
 printf("Next year is :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
  //DAY ADD
  
  temp_day=t.day;
  temp_month=t.month;
  temp_year=t.year;
 
 temp_day+=t.ADD.a_day;
 if(temp_day>=30)
 {
   temp_month++;
   if(temp_month>12)
   {
     temp_year++;
     temp_month-=12;
   }
   temp_day-=30;
 }
 printf("After addition of days :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
  //MONTH ADD
  
  temp_day=t.day;
  temp_month=t.month;
  temp_year=t.year;
 
 temp_month+=t.ADD.a_month;
 if(temp_month>12)
 {
   temp_year++;
   temp_month-=12;
 }
 printf("After addition of months :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
   //YEAR ADD
   
   
  temp_day=t.day;
  temp_month=t.month;
  temp_year=t.year;
 
 temp_year+=t.ADD.a_year;
 
 printf("After addition of years :%d-%d-%d\n",temp_day,temp_month,temp_year);
 
 
 //MONTH CHECK
 switch(t.month)
 {
   case 1:
   printf("Month name : January");
   break;
   case 2:
   printf("Month name : Feburary");
   break;
   case 3:
   printf("Month name : March");
   break;
   case 4:
   printf("Month name : April");
   break;
   case 5:
   printf("Month name : May");
   break;
   case 6:
   printf("Month name : June");
   break;
   case 7:
   printf("Month name : July");
   break;
   case 8:
   printf("Month name : August");
   break;
   case 9:
   printf("Month name : September");
   break;
   case 10:
   printf("Month name : October");
   break;
   case 11:
   printf("Month name : November");
   break;
   case 12:
   printf("Month name : December");
   break;
 }
 printf("\n");
 printf("Date : %d.%d.%d\n",t.day,t.month,t.year);
}
void main()
{
  struct time t;
  printf("Enter a date:");
  scanf("%d%d%d",&t.day,&t.month,&t.year); 
  printf("No. of days to add:");
  scanf("%d",&t.ADD.a_day);
  printf("No. of months to add:");
  scanf("%d",&t.ADD.a_month);
  printf("No. of years to add :");
  scanf("%d",&t.ADD.a_year);
  predit(t);
}
