#include<iostream>
using namespace std;
void array(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    arr[i]=0;
  }
}
void voting(string name[],int arr[],int size)
{
    char ch;
    int othr=0,win=0,count=0;
    for(int i=1;i<=25;i++)
    {
       cout<<"Enter your vote to ";
       cin>>ch;
       switch(ch)
       {
            case '1':
                    arr[0]++; 
                    break;
            case '2':
                    arr[1]++;
                    break;
            case '3':
                    arr[2]++;
                    break;
            case '4':
                    arr[3]++;
                    break;
            case '5':
                    arr[4]++;
                    break;
            default :
                    othr++;
                   
       }     
    }
    for(int j=0;j<size;j++)
    {
         cout<<"votes for candidate "<<j+1<<" are "<<arr[j]<<endl;
    }
    for(int k=0;k<size;k++)
    {
        if(win<arr[k])
        {
            win=arr[k];
            count=k;
        }
    }
    cout<<"candidate "<<name[count]<<" is winner with vote "<<win;

}
int main()
{
    int arr[5];
    int size=5;
    string name[5] = {"rahul","harry","jenny","shubham","akash"};
    cout<<"***** Welcome to the 2022 election *****\n"<<endl;
    cout<<"There are 5 candidates and 25 voters are there "<<endl;
    array(arr,size);
    voting(name,arr,size);
    
}
