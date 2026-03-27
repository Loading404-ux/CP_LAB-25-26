#include<stdio.h>
int prime_sum(int a[],int size)
{
  int c=0;
  int s=0;
  for(int i=0;i<size;i++)
  {
    for(int j=1;j<=a[i];j++)
    {
     if(a[i]%j==0)
     {
       c++;
     }
    }
    if(c==2)
    s+=a[i];
    c=0;
  }
  return s;
}
void main()
{
 int size;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 int a[size];
 printf("Enter the array elements:");
 for(int i=0;i<size;i++)
 scanf("%d",&a[i]);
 prime_sum(a,size);
 int result=prime_sum(a,size);
 printf("Sum of the prime numbers present in the given array: %d",result);
 
}
