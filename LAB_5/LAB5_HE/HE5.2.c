#include<stdio.h>
void main()
{
int sum=0;
  for(int i=101;i<200;i++)
  {
    if(i%7==0)
    {
      sum=sum+i;
      printf("%d  ",i);
    }
  }
  printf("\nTOTAL SUM : %d\n",sum);
}
