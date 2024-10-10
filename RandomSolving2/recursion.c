
//sum upto 100

// #include<stdio.h>
// int rec_sum(int x,int y)
// {
//     static int sum;
//     if(x==0)
//     {
//         return 0;
//     }
//     else
//     {
//         if(y<=x)
//         {
//            sum=sum+y;
//            rec_sum(x,++y);
//         }
//     }
//     return(sum);
// }
// int main()
// {
//     int num,s,n=1;
//     printf("Enter the number ");
//     scanf("%d",&num);
//     s=rec_sum(num,n);
//     printf("sum of %d is %d ",num,s);
// }


// Sum of digit

// #include<stdio.h>
// int sum(long int x)
// {
//     static int s;
//     int i;
//     if(x>0)
//     {
//        i=x%10;
//        s=s+i;
//        sum(x/10);
//     }
//     return s;
// }
// int main()
// {
//     long int n,j;
//     printf("Enter the number ");
//     scanf("%ld",&n);
//     j=sum(n);
//     printf("sum of %ld is %d ",n,j);
// }


// fibonacci series

// #include<stdio.h>
// void fibonacci(int num1,int num2,int n)
// {
//     static int num3;
//     num3=num1+num2;
//     if(num3<=n)
//     {
//         printf(" %d ",num3);
//         fibonacci(num2,num3,n);
//     }
// }
// int main()
// {
//     int num1=0,num2=1,n;
//     printf("fibonacci series upto ");
//     scanf("%d",&n);
//     printf("%d %d",num1,num2);
//     fibonacci(num1,num2,n);
// }
