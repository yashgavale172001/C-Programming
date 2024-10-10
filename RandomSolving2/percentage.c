#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e,per;
    printf("Enter the marks of english: \n");
    scanf("%f",&a);
    printf("Enter the marks of maths:\n ");
    scanf("%f",&b);
    printf("Enter the marks of OOP: \n");
    scanf("%f",&c);
    printf("Enter the marks of BCN: \n");
    scanf("%f",&d);
    printf("Enter the marks of COLD: \n");
    scanf("%f",&e);
    per=(a+b+c+d+e)/500*100;
    printf("Total percentage: %f\n",per);
    getch();
    return 0;
    
}    
        
    
