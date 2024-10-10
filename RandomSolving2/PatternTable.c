#include<stdio.h>

int main()
{
    int s,c,f,i;
    printf("find the Square,cube and fourth term of the numbers\n");
    printf("number\t\tsquare\t\tcube\t\tfourth\n");
    i=1;
    while(i<=10)
    {
        s=i*i;
        c=i*i*i;
        f=i*i*i*i;
        printf("%d\t\t%d\t\t%d\t\t%d\n",i,s,c,f);
        i++;
    }
    return 0;
    

}