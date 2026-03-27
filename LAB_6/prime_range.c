#include<stdio.h>
void main()
{
  int r1,r2;
  int c=0;
  printf("Enter the range :");
  scanf("%d%d",&r1,&r2);
  for(int i=r1;i<=r2;i++)
  {
    c=0;
    for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==2)
    printf("%d ",i);
  }
  printf("\n");
}
