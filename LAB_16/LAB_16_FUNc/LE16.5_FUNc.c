#include<stdio.h>

int size;

int a[999];
 

void sort()
{
 int *ptr;
  ptr=a;
  printf("Before sorting the elements of the array are: ");
  for(int i=0;i<size;i++)
  printf("%d ",*(ptr+i));
  
  printf("\n");
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(ptr[i]>ptr[j])
      {
        int temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
      }
    }
  }
  printf("After sorting the elements of the array are: ");
  for(int i=0;i<size;i++)
  printf("%d ",*(ptr+i));
  printf("\n");
}
void main()
{
  printf("Enter the array size:");
  scanf("%d",&size);
  printf("Enter the elements of the array:");
  for(int i=0;i<size;i++)
  scanf("%d",&a[i]);
  sort();
  
}
