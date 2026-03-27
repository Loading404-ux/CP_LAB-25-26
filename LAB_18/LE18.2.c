#include<stdio.h>
#include<stdlib.h>

void main()
{
 float *p;
 int n;
 printf("Enter the total number of elements:");
 scanf("%d",&n);
 p=(float *)malloc(n*sizeof(float));
 for(int i=0; i<n; i++)
 {
 printf("Number%d:",i+1);
 scanf("%f", p+i);
 }
 float max=*(p+0);
 for(int i=1; i<n; i++)
 {
  if(max<*(p+i))
  max=*(p+i);
 }
 printf("Largest number is %.2f",max);
}
