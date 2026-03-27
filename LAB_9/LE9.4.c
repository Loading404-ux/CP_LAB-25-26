#include<stdio.h>
void main()
{
  int size,search,pos=0;
  printf("Enter the array size : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements:",size);
  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);
  printf("Enter the element to search: ");
  scanf("%d",&search);
  for(int i=0;i<size;i++)
  {
    if(arr[i]==search)
    {
    pos=i;
    break;
    }
  }
  if(pos!=0)
  printf("Element %d found at position %d",search,pos+1);
  else
  printf("Element %d not found in the array",search);
}
