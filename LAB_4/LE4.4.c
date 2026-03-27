#include<stdio.h>
void main()
{
  int P,C,M,T,PM;
  printf("Enter the marks as per follows :\n Physics :\n Chemistry :\n Mathematics : \n");
  scanf("%d%d%d",&P,&C,&M);
  T=P+C+M;
  PM=P+M;
  if(M>=65 && C>=50 && P>=55 && T>=190 && PM>=140)
  {
  printf("The candidate is eligible for admission.");
  }
  else
  {
  printf("The candidate is not eligible for admission.");
  }
  
}
