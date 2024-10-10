#include<iostream>
using namespace std;
int main()
{
    FILE *fp;
    char ch;
    int l=0,s=0,c=0,t=0;
    fp=fopen("yash.txt","a");
    while(1)
    {
        ch=getc(fp);
        {
          if(ch==EOF)
          {
            break;
          }
          c++;
          if(ch==' ')
          {
            s++;
          }
          if(ch=='\t')
          {
              t++;
          }
          if(ch=='\n')
          {
            l++;
          }
        }

    }
    fclose(fp);
    cout<<"number of characters are "<<c<<endl;
    cout<<"number of lines are "<<l<<endl;
    cout<<"number of spaces are "<<s<<endl;
    cout<<"number of tab are "<<t<<endl;

}