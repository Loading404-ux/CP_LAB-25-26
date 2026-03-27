#include<stdio.h>
#include<math.h>
void main()
{
  int n,original,root;
  printf("Enter a number: ");
  scanf("%d",&n);
  root=pow(n,0.5);
   original=root*root; 
  if(original==n)
  printf("%d is a perfect square.",n);
  else
  printf("%d is not a perfect square.",n);
}

