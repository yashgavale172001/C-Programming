// #include<stdio.h>
// int main()
// {
//     float r,c;
//     float circle(float);
//     printf("Enter the radius of circle ");
//     scanf("%f",&r);
//     c=circle(r);
//     printf("Area of circle is %f ",c);
// }

// float circle(float d)
// {
//     float a=3.14*d*d;
//     return a;
// }


// #include<stdio.h>
// int main()
// {
//     float r,l,b;
//     float Area(float,float);
//     r=Area(l,b);
//     printf("Area of rectangle is %f ",r);
// }
// float Area(float x,float y)
// {
//     printf("length ");
//     scanf("%f",&x);
//     printf("breadth ");
//     scanf("%f",&y);
//     float z=x*y;
//     return z;  
// } 


 

// #include<stdio.h>
// void FirstLast(long int x)
// {
    
//     int m=1;
//     while(x>0)
//     {
//        int i;
//        i=x%10;
//        x=x/10;
      
//        if(m==1)
//        {
//            printf("last number is %d\n",i);
//         //    int l=i;
//        }
//        if(x==0)
//        {
//           printf("first number is %d",i);
//         //   int f=i;
//        }
//         m++;
//     }
    
// }

// void main()
// {
//     long int n;
//     printf("Enter the number\n");
//     scanf("%ld",&n);
//     FirstLast(n);
// }

// #include<stdio.h>
// int Factorisation(int x)
// {
//     if(x>0)
//     {
//        int s=1;
//        for(int i=1;i<=x;i++)
//        {
//           s=s*i;
//        }
//        return s;
//     }

// }
// int main()
// {
//     int n,f;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//     f=Factorisation(n);
//     printf("factorisation of %d is %d",n,f);
// }

// #include<stdio.h>
// int SumNum(int x)
// {
//     int sum=0;
//     int i;
//     for(;x>0;x=x/10)
//     {
//         i=x%10;
//         sum=sum+i;
//     }
//     return sum;
// }
// int Reverse(int y)
// {
//    int i,sum=0;
//    while(y>0)
//    {
//       i=y%10;
//       sum=sum*10+i;
//       y=y/10;
//    }
//    return sum;
// }
// int main()
// {
//     int n,s,r;
//     printf("Enter any number\n");
//     scanf("%d",&n);
//     s=SumNum(n);
//     printf("Sum of all numbers are %d ",s);
//     r=Reverse(n);
//     printf("reverse of the programme is %d ",r);
// }


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int d=3;
//     long int p;
//     p=pow(10,d);
//     printf("%ld",p);
// }

// #include<stdio.h>
// void Prime(int x)
// {
//     int i,m=0;
//     for(i=1;i<=x;i++)
//     {
//         if(i%2==0)
//         {
//             m++;
//             if(m==3)
//             {
//                 printf("number is not prime");
//                 break;
//             }
//         }
//     }
//     if(m==2)
//     {
//         printf("number is prime");
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter the number ");
//     scanf("%d",&n);
//     Prime(n);
    
// }


// #include<stdio.h>
// #include<math.h>
// int firstlast(int x)
// {
//     int a,b,c,d;
//     a=x%10;
//     b=(int)log10(x);
//     c=x/pow(10,b);
//     d=a;
//     d=d*(int)pow(10,b);
//     d=d+x%(int)pow(10,b);
//     d=d-a;
//     d=d+c;
//     return d;

// }
// int main()
// {
//     int n,f;
//     printf("enter the number ");
//     scanf("%d",&n);
//     f=firstlast(n);
//     printf("after swaping the first and last element is %d",f);
// }

#include<stdio.h>
int single(long int n,long int i,long int c)
{
    while(n>9)
    {
       while(n>0)
       {
          i=n%10;
          c=c+i;
          n=n/10;
       }
       printf("sum of numbers is %d\n",c);
       if(c>9)
       {
          n=c;
          c=0;
       }
    }
}
int main()
{
    long int n,i,c=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n<0)
    {
        n=(-1)*n;
    }
    if(9>=n)
    {
        printf("the value of n is in single digit %ld",n);
    }
    else
    {
      single(n,i,c);
    }
}