#include<stdio.h>
void dispArr(int *,int *,int);
void mulArr(int *,int *,int );
void readArr(int size)
{
  int First[size];
 int Second[size];
  printf("Enter the elements of the first array:");
  for(int i=0;i<size;i++)
  scanf("%d",&First[i]);
  printf("Enter the elements of the second array:");
  for(int i=0;i<size;i++)
  scanf("%d",&Second[i]);
  dispArr(First,Second,size);
  mulArr(First,Second,size);
}
void dispArr(int First[],int Second[],int size)
{
  printf("First array:");
 for(int i=0;i<size;i++)
 printf("%d ",First[i]);
 printf("\n");
 printf("Second array:");
 for(int i=0;i<size;i++)
 printf("%d ",Second[i]);
 printf("\n");
}
void mulArr(int First[],int Second[],int size)
{
  int MULTI[size];
  for(int i=0;i<size;i++)
  MULTI[i]=First[i]*Second[i];
  printf("Product of first and second array:");
 for(int i=0;i<size;i++)
 printf("%d ",MULTI[i]);
 printf("\n");
}

void main()
{
 int size;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 int First[size];
 int Second[size];
 readArr(size);
}
