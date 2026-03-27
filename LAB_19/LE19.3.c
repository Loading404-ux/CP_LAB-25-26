#include<stdio.h>
#include<string.h>

struct marks 
{
 int Roll;
 char name[99];
 char gender;
 double m1;
 double m2;
 double m3;
};
void main()
{
  int n;
  printf("Enter the number of students : ");
  scanf("%d",&n);
  struct marks std[n];
  for(int i=0;i<n;i++)
  {
    printf("-------------------------------------------\n");
    printf("Enter the student %d data:\n",i+1);
    printf("Roll Number:");
    scanf("%d",&std[i].Roll);
    printf("Name:");
    scanf(" %[^\n]", std[i].name);
    printf("Gender:");
    scanf(" %c",&std[i].gender);
    printf("Mark in subject 1:");
    scanf("%lf",&std[i].m1);
    printf("Mark in subject 2:");
    scanf("%lf",&std[i].m2);
    printf("Mark in subject 3:");
    scanf("%lf",&std[i].m3);
  }
  printf("\n------------------------------------------------------\n");
  printf("\n------------------------------------------------------\n");
  printf("Roll\tName\tGender\tSub1\tSub2\tSub3\tTotal\n");
  printf("\n------------------------------------------------------\n");
  for(int i=0;i<n;i++)
  {
   printf("%d\t%s\t%c\t%.1lf\t%.1lf\t%.1lf\t%.1lf",std[i].Roll,std[i].name,std[i].gender,std[i].m1,std[i].m2,std[i].m3,(std[i].m1+std[i].m2+std[i].m3));
   printf("\n------------------------------------------------------\n");
  }
}
