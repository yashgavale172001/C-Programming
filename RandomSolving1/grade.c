#include<stdio.h>
#include<conio.h>
int main()
{
    float s1,s2,s3,s4,s5,total,per;
    printf("Enter the marks:\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/500*100;
    printf("Total percentage of student %0.2f\n",per);
    if(s1<35 || s2<35 ||s3<35 ||s4<35 ||s5<35)
    {
        printf("student is fail\n");

    }
    else
    {
        if(per>=75)
        {
            printf("pass with distinction \n");
        }
        else
        {
            if(per>=60 && per<75)
            {
                printf("pass with first  class\n");
            }
            else
            {
                if(per>=50 && per<60)
                {
                    printf("student pass with second class\n");
                }
                else
                {
                    if(per>=35 && per<50)
                    {
                        printf("student is passed");
                    }
                }
            }
        }
    }
} 