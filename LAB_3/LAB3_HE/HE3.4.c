#include<stdio.h>
void main()
{
 int p;
 printf("Enter the amount in paisa:");
 scanf("%d",&p);
 int r=p/100;
 p=p%100;
 printf("Entered amount = %d Rupees and %d paisa",r,p);
 
}
