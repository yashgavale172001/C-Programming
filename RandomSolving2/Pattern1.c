/*#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
      for(j=i;j>=1;j--)
        {
            if(j%2!=0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}*/


/* #include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}*/

/* #include<stdio.h>
int main()
{
    int i,j,k=3;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%c\t",k);
        }
        printf("\n");
    }
}*/

#include<stdio.h>
int main()
{
    int i,j,y=3;
    printf("\t");
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("%c ",y);
        }
        else
        {
           printf("  ");
        }
    }
    printf("\n\t");
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            printf("%c ",y);
        }
        else{
            printf("  ");
        }
    }
    printf("\n\t");
    for(i=1;i<=5;i++)
    {
        if(i==1)
        {
            printf("%c ",y);
        }
        if(i==5)
        {
            printf("%c",y);
        }
        if(i==4)
        {
            printf("");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n\t");
    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            printf("%c ",y);
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n\t");
    for(i=1;i<=5;i++)
    {
        if(i==3)
        {
            printf("%c ",y);
        }
        else
        {
           printf("  ");
        }
    }
}

/* #include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(j%2==0)
            {
                printf("%d ",0);

            }
            else
            {
                printf("%d ",1);
            }
        }
        printf("\n");
    }
}*/

/* #include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d ",0);
            }
            else
            {
               printf("%d ",1);
            }
        }
        printf("\n");
    }
    
}*/

