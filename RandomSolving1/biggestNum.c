#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the two numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("first numbr is greater");

    }
    else
    {
        if(num2>num1 && num2>num3 )
        {
            printf("second number is greater\n");

        }
        else
        {
               printf("third number is greater\n");
        }

    }
}