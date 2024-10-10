#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character :\n");
    scanf("%c",&ch);
    if(ch<=90 && ch>=65)
    {
        printf("given character is capital letter \n");
    }
    else
    {
       if(ch<=122 && ch>=97)
       {
           printf("Given character is small letter \n");
       }
       else
       {
          if(ch>=48 && ch<=57)
          {
            printf("Given character is number ");
          }
          else
          {
            printf("given character  is special symboll \n");
          }
       }
    }
}