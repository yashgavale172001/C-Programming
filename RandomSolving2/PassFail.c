#include<stdio.h>
int  main()
{
    float eng,math,oop,bcn,cold,per;
    printf("English:\n");
    scanf("%f",&eng);
    printf("MATHS:\n");
    scanf("%f",&math);
    printf("OOP:\n");
    scanf("%f",&oop);
    printf("BCN:\n");
    scanf("%f",&bcn);
    printf("COLD:\n");
    scanf("%f",&cold);
    per=(eng+math+oop+bcn+cold)/500*100;
    printf("Total percentage: %0.2f\n",per);
    if(eng<35 || math<35 || oop<35 || bcn<35 || cold<35)
    {
        printf("student is fail ");
    }
    else
    {
        printf("student is passed ");
    }
}