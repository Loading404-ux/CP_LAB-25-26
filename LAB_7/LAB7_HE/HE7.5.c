#include<stdio.h>
#include<math.h>
void main()
{
  int n;
  int sum=0;
  int c=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  int temp=n;
  while(temp!=0)
  {
    int a=temp%10;
    temp/=10;
    c++;
  }
  int temp1=n;
  while(temp1!=0)
  {
    int a1=temp1%10;
    sum=sum+ (pow(a1,c));
    temp1/=10;
  }
  if(sum==n)
  printf("%d is an Armstrong number ",n);
  else
  printf("%d is not an Armstrong number",n);
}
