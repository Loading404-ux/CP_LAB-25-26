#include<stdio.h>
#include<stdlib.h>

void main()
{
 int *p;
 int n;
 printf("No. Of elements:");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 int sum=0;
 for(int i=0; i<n; i++)
 {
 scanf("%d", p+i);
 sum=sum+*(p+i);
 }
 printf("Sum=%d",sum);
}
