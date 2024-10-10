#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("Enter the numbers ");
    scanf("%d%d",&a,&b);
    printf("Enter the operation \n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '*':
            c=a*b;
            printf("multiplication of two numbers is %d\n",c);
            break;
        case '/':
            c=a/b;
            printf("division of two numbers are %d\n",c);
            break;
        case '+':
            c=a+b;
            printf("addition of two numbers is%d\n",c);
            break;
        case '-':
            c=a-b;
            printf("substraction of two numbers is%d\n",c);
            break;
        default:
            printf("You entered wrong choice \n");


    }
    getch();
    return 0;
}