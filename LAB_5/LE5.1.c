#include<stdio.h>
void main()
{
  int marks;
  printf("Enter total mark secured by the student:");
  scanf("%d",&marks);
  switch(marks)
  {
  case 90 ... 100:
  printf("Secured grade is O\n");
  break;
  case 80 ... 89:
  printf("Secured grade is E\n");
  break;
  case 70 ... 79:
  printf("Secured grade is A\n");
  break;
  case 60 ... 69:
  printf("Secured grade is B\n");
  break;
  case 50 ... 59:
  printf("Secured grade is C\n");
  break;
  case 40 ... 49:
  printf("Secured grade is D\n");
  break;
  case 0 ... 39:
  printf("Secured grade is F\n");
  break;
  default:
  printf("Wrong input\n");
  }
}
