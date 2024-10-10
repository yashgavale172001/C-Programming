#include<stdio.h>
#include<conio.h>
int main()
{
    
    long int num;
    int a,b,sum;
    printf("sum of first and last number \n");
    printf("Enter the number :");
    scanf("%ld",&num);
    a=num%10;
    num=num/10000;
    
    sum=a+num;
    printf("The sum of First and last number is: %d\n",sum);

    return 0;


}