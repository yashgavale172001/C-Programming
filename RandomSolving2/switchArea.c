#include<stdio.h>
float areac(float x)
{
    return(3.14*x*x);
}
float areat(float x,float y)
{
    return(0.5*x*y);
}
float arear(float x,float y)
{
    return(x*y);
}
float areas(float s)
{
    return(s*s);
}
int main()
{
    float A,b,h,r;
    char ch;
    printf("T: area of triangle\nC: area of circle\nR: area of rectangle\nS: area of square\n");
    printf("Enter the choice ");
    scanf("%ch",&ch);
    switch(ch)
    {
        case 'T':
                 printf("base ");
                 scanf("%f",&b);
                 printf("height ");
                 scanf("%f",&h);
                 A=areat(b,h);
                 printf("area of triangle is %f",A);
                 break;
        case 'C':
                 printf("radias ");
                 scanf("%f",&r);
                 A=areac(r);
                 printf("area of circle is %f",A);
                 break;
        case 'R':
                 printf("length ");
                 scanf("%f",&b);
                 printf("breadth ");
                 scanf("%f",&h);
                 A=arear(b,h);
                 printf("area of rectangle is %f",A);
                 break;
        case 'S':
                 printf("side ");
                 scanf("%f",&r);
                 A=areas(r);
                 printf("area of circle is %f",A);
                 break;
        default :
                printf("you entered wrong choice ");
    }
}