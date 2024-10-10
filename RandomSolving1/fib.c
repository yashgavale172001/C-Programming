#include<stdio.h>
int main()
{
   int num1=0,num2=1,num3,i,num;
   printf("Enter the terms that you want to print ");
   scanf("%d",&num);
   printf("*******FIBONACCI SERIES********\n");
   printf("%d\t%d\t%d\t",num1,num2);
   for(i=3;i<=num;i++)
   {
       num3=num1+num2;
       printf("%d\t",num3);
       num1=num2;
       num2=num3;
   }


}
