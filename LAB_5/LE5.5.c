#include<stdio.h>
#include<math.h>
void main()
{
 int a,b,c;
 printf("Input values for a, b and c:");
 scanf("%d%d%d",&a,&b,&c);
 float root=( pow(b,2))-4*a*c;
 float root1= ((-1* b)+ pow(root,0.5))/2*a;
 float root2= ((-1* b)- pow(root,0.5))/2*a;
 if(a==0&&b==0)
 printf("No solution if both a and b are zero. ");
 else
 if(root1==0.0 || root2==0.0)
 {
 printf("There is only one root if b2-4ac is equal to zero.\n");
 printf("Roots are %.2f and %.2f\n",root1,root2);
 }
 else
 if(root<0.0)
 {
 printf("There is no real root because b2-4ac<0\n");
 printf("Roots are %.2f and %.2f\n",root1,root2);
 }
 else
 printf("The Roots are real & unequal. Roots are %.2f and %.2f\n",root1,root2);
}
