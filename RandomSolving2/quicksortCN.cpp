#include<iostream>
using namespace std;
void quicksort(int input[],int size)
{
    if(size==0 || size==1)
    {
        return;
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(input[0]>input[i])
        {
           count++;
        }
    }
    int temp=input[count];
    input[count]=input[0];
    input[0]=temp;
    int i=0,j=size-1;
    while(i<count && count<j)
    {
        if(input[i]<input[count])
        {
            i++;
        }
        else if(input[j]>=input[count])
        {
            j--;
        }
        else
        {
            int temp=input[i]; 
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    quicksort(input,count);
    quicksort(input+count+1,size-count-1);

}
int main()
{
    int input[]={12,76,23,98,56};
    int n=sizeof(input)/sizeof(int);
    quicksort(input,n);
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
}