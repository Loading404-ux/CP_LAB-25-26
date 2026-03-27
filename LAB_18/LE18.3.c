#include<stdio.h>
#include<stdlib.h>

void main()
{
  int *m,*c;
  int n;
  printf("Enter the array size: ");
  scanf("%d",&n);
  m=(int *)malloc(n*sizeof(int));
  c=(int*)calloc(n,sizeof(int));
  if(m==NULL)
  printf("Memory failed to allocated using malloc.\n");
  else
  printf("Memory successfully allocated using malloc.\n");
  
  if(c==NULL)
  printf("Memory failed to allocated using calloc.\n");
  else
  printf("Memory successfully allocated using calloc.\n");
  
  free(m);
  printf("Malloc Memory successfully freed.\n");
  free(c);
  printf("Calloc Memory successfully freed.\n");
  
}
