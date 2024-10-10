#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,r1,r2,dis;
 printf("Enter the coifficiant of Quadratic equation \n");
 scanf("%f %f %f ",&a,&b,&c);
 if(a==0)
 {
    printf("lenear quadratic equation");
    r1=-c/b;
    r2=r1;
    printf("the roots of quadratic equation are %f %f \n",r1,r2);
 }
 else
 {
   dis=b*b-4*a*b;
   printf("The value of descremenant is: %0.2f\n",dis);
   if(dis==0)
   {
      printf("Roots are real and equal\n");
      r1=-b/2*a;
      r2=r1;
      printf("roots are %f and %f ",r1,r2);
   }
   else
   {
      if(dis>0)
      {
         printf("roots are rela and distinct\n");
         r1=(-b+(sqrt(dis)))/2*a;
         r2=(-b-(sqrt(dis)))/2*a;
         printf("roots are %f and %f ",r1,r2);
      }
      else
      {
         printf("roots are imaginary");
      }
   }
 }
   
   
 
}