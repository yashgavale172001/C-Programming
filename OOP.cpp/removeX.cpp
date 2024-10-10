#include<iostream>
using namespace std;
void removeX(char input[])
{

    // Write your code here
    //static int l=strlen(input);
    if(input[0]==NULL)
    {
        return;
    }
    //removeX(input+1);
    if(input[0]=='x')
    {
        //input[0]=input[1];
        
        for(int i=0;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
    }
    removeX(input+1);
    
}
int main()
{
    char s[]="xaxaxa";
    removeX(s);
    cout<<s;
}

