#include<stdio.h>
void main()
{
  int size,sum,tsum;
  float avg;
  printf("Enter the array size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);
  printf("Enter the sum: ");
  scanf("%d",&sum);
  int lb=0;
  int ub=size-1;
  while(tsum!=sum)
  {
    for(int i=lb;i<=ub;i++)
    {
      tsum+=arr[i];
    }
    if(tsum==sum)
    {
      break;
    }
    else
    {
      lb++;
      ub--;
      tsum=0;
    }
  }
  printf("Sub array which adds to %d:",sum);
  for(int i=lb;i<=ub;i++)
  printf("%d ",arr[i]);
  
  
}
  
