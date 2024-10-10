// #include<stdio.h>
// int main()
// {
//     int a,*b,**c;
//     a=3;
//     b=&a;
//     c=&b;
//     printf("address of a %d\n",&a);
//     printf("address of a %d\n",*(&b));
//     printf("address of a %d\n",&(**c));
//     printf("address of a %d\n",*c);
//     printf("address of a %d\n",b);
//     printf("\n\n");
//     printf("address of b %d\n",&b);
//     printf("address of b %d\n",&(*c));
//     printf("address of b %d\n",c);
//     printf("\n\n");
//     printf("address of c %d\n",&c);
//     printf("\n\n");
//     printf("value of a is %d\n",a);
//     printf("value of a is %d\n",(**c));
//     printf("value of a is %d\n",*(&a));
//     printf("value of a is %d\n",*b);
    

// }

// SUM ,DIVISION , MULTIPLICATION, using pointer.

// #include<stdio.h>
// void operation(int a,int  b, int *sum,int *multi,int *div)
// {
//    *sum=a+b;
//    *multi=a*b;
//    *div=a/b;
// }
// int main()
// {
//     int a,b,sum,multi,div;
//     printf("Enter the number\n");
//     scanf("%d %d",&a,&b);
//     operation(a,b,&sum,&multi,&div);
//     printf("sum of %d and %d is %d\n",a,b,sum);
//     printf("multiplication of %d and %d is %d\n",a,b,multi);
//     printf("division of %d and %d is %d\n",a,b,div);
// }

// find percentage of students and pass or fail using pointer 

// #include<stdio.h>
// void passfail(float *per,float e,float m,float s,float o,float c)
// {
//     *per=((e+m+s+o+c)/500)*100;
    
// }
// int main()
// {
//     float per,e,m,s,o,c;
//     printf(" enter the marks of english\n enter the marks of maths\n enter the marks of science\n enter the marks of OOP\n enter the marks of COLD\n\n");
//     scanf("%f\n%f\n%f\n%f\n%f",&e,&m,&s,&o,&c);
//     passfail(&per,e,m,s,o,c);
//     printf("percentage %f\n",per);
//     if(per>35 || per==35)
//     {
//         printf("student is pass ");
//     }
//     else
//     {
//        printf("student is fail ");
//     }
// }

// Reverse ,Magic and Sum of Digit

#include<stdio.h>
void remix(long int num,long int *m,long int *s,long int *r)
{
    static long int i;
    *s=0,*r=0,*m=0;
    while(num>0)
    {
        i=num%10;
        *s=*s+i;
        *r=*r*10+i;
        *m=*m+(i*i*i);
         num=num/10;
    }
}
int main()
{
  long int num,m,s,r;
  printf("Enter the number ");
  scanf("%ld",&num);
  remix(num,&m,&s,&r);
  printf("sum of the %ld is %ld\n",num,s);
  printf("reverse of %ld is %ld\n",num,r);
  if(m==num)
  {
    printf("%ld is magic",num);
  }
  else
  {
    printf("%ld is not magic ");
  }
}