#include<iostream>
using namespace std;
class initial
{   protected:
        int arr[10];
    public:
        void read()
        {
            for(int i=0;i<=9;i++)
            {
                cin>>arr[i];
            }
        }
        void display()
        {
            for(int i=0;i<=9;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
class sort:public initial
{
    public:
    void sorting()
    {
        for (int i=0;i<=8;i++)
        {
             for(int j=i+1;j<=9;j++)
             {
                 if(arr[i]>=arr[j])
                 {
                     int temp=arr[i];
                     arr[i]=arr[j];
                     arr[j]=temp;
                 }
             }
        }
        
    }

};
int main()
{
    // initial a1;
    // a1.read();
    // a1.display();
    sort a2;
    a2.read();
    a2.sorting();
    a2.display();
}