#include<stdio.h>
#include<stdlib.h>

void main()
{
  int n;
  int *a;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  a=(int *)calloc(n,sizeof(int));
  printf("Memory successfully allocated using calloc.\n");
  printf("Enter the elements of the array are: ");
  for(int i=0;i<n;i++) 
   scanf("%d",&a[i]);
  printf("The elements of the array are:");
  for(int i=0;i<n;i++) 
   printf("%d ,",*(a+i));
   printf("\n");
   int n1;
   printf("Enter the new size of the array: ");
   scanf("%d",&n1);
   int *temp=(int *)realloc(a,n1*sizeof(int));
   a=temp;
   printf("Memory successfully re-allocated using realloc.\n");
   printf("Enter new elements of the array:");
   for(int i=n;i<n1;i++) 
   scanf("%d",&a[i]);
   printf("The elements of the array are:");
   for(int i=0;i<n1;i++) 
   printf("%d ,",*(a+i));
   
   
   
  
}
