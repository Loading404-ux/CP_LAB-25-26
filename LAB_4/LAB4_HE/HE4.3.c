#include<stdio.h>
void main()
{
  int marks;
  printf("Enter total mark secured by the student:");
  scanf("%d",&marks);
  if(marks>=90 && marks<=100)
  printf("Secured grade is O\n");
  else
  if(marks>=80 && marks<=89)
  printf("Secured grade is E\n");
  else
  if(marks>=70 && marks<=79)
  printf("Secured grade is A\n");
  else
  if(marks>=60 && marks<=69)
  printf("Secured grade is B\n");
  else
  if(marks>=50 && marks<=59)
  printf("Secured grade is C\n");
  else
  if(marks>=40 && marks<=49)
  printf("Secured grade is D\n");
  else
  if(marks>=0 && marks<=39)
  printf("Secured grade is F\n");
  else
  printf("Wrong Input\n");
}
