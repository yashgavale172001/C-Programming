// #include<stdio.h>
// int main()
// {
//     int i,j,k,l;
    
//     for(i=0;i<=5;i++)
//     {
//         for(j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=i;k>=0;k--)
//         {
//             printf("%d",k);
            
//         }
//         // cout<<endl;
//         for(int l=1;l<=i;l++)
//         {
//            printf("%d",l);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     char i,j,k,l,m=1,y=70;
//     for(i=65;i<=73;i++)
//     {
//         printf("%c",i);
//     }
//     printf("\n");
//     for(i=68;i>=65;i--)
//     {
        
        
//         for(j=65;j<=i;j++)
//         {
//             printf("%c",j);
//         }
//         for(k=1;k<=m;k++)
//         {
//             printf(" ");
//         }
//         m=m+2;
        
//         for(l=y;l<=73;l++)
//         {
//             printf("%c",l);
//         }
//         y++;
//         printf("\n");
//     }
// }

#include<stdio.h>
int main()
{
    char i,j,k;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=69;k++)
        {
            printf("%c",k);
        }
        printf("\n");
    }
    for(i=68;i>=65;i--)
    {
        for(j=i;j>=65;j--)
        {
            printf(" ");
        }
        for(k=i;k<=69;k++)
        {
            printf("%c",k);
        }
        printf("\n");
    }
}







