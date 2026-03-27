#include<stdio.h>
#include<string.h>


struct student
{
 int Roll;
 char name[99];
 char gender;
 float marks;
};

void main()
{
 struct student s;
 printf("Enter the students data:\n");
 printf("Roll Number:");
 scanf("%d",&s.Roll);
 printf("Name:");
 scanf(" %[^\n]",s.name);
 printf("Gender:");
 scanf(" %c",&s.gender);
 printf("Marks:");
 scanf("%f",&s.marks);
 printf("The students details are:\n");
 printf("Roll Number: %d\n",s.Roll);
 printf("Name: %s\n",s.name);
 printf("Gender: %c\n",s.gender);
 printf("Marks: %.2f\n",s.marks);
 
 
 
}
