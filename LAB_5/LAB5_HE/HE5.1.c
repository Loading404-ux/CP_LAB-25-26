#include<stdio.h>
void main()
{
 int n;
 printf("Enter the week day number :");
 scanf("%d",&n);
 switch(n)
 {
 case 0:
 printf("Sunday\n");
 break;
 case 1:
 printf("Monday\n");
 break;
 case 2:
 printf("Tuesday\n");
 break;
 case 3:
 printf("Wedneshday\n");
 break;
 case 4:
 printf("Thursday\n");
 break;
 case 5:
 printf("Friday\n");
 break;
 case 6:
 printf("Saturday\n");
 break;
 default:
 printf("Wrong Choice\n");
 }
}
