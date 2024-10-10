// #include<stdio.h>
// #include<math.h>
// int main()
// {
//    int a=12345;
//    int d;
//    d=(int)log10(a);
//    printf("%d ",d);
// }

// #include<stdio.h>
// #include<math.h>
// long funl(long p)
// {
//    long b,d,c,e;
//    b=p%10;
//    d=(int)log10(p);
//    c=p/pow(10,d);
//    e=b;
//    e=e*(long)(pow(10,d));
//    e=e+p%(long)(pow(10,d));
//    e=e-b;
//    e=e+c;
//    return e;
// }
// int main()
// {
//    long a,fun,funl(long);
//    scanf("%ld",&a);
//    fun=funl(a);
//    printf("Number after swaping 1st and last number %ld ",fun);
// }

#include<stdio.h>
void check(int x)
{
   if(x>0)
   {
      printf("number is positive ");
   }
   else
   {
      if(x<0)
      {
         printf("number is negative ");
      }
      else
      {
         printf("number is 0 ");
      }
   }
}
int main()
{
   int n;
   printf("Enter the number ");
   scanf("%d",&n);
   check(n);
}
