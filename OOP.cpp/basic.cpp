#include<iostream>
using namespace std;
class total
{
    long n,rv,x;
    int sum,i;
    public:
    void input()
    {
        cout<<"enter the number\n";
        cin>>n;
        sum=0;
        rv=0;
    }
    void magic()
    {
        x=n;
        while(x>0)
        {
            i=x%10;
            sum=sum+i*i*i;
            x=x/10;
        }
        if(sum==n)
        {
            cout<<"the number is magic\n";
        }
        else{
            cout<<"number is not magic\n";
        }
    }
    void sumnum()
    {
        long x=n;
        int sum=0;
        while(x>0){
            i=x%10;
            sum=sum+i;
            x=x/10;
        }
        cout<<"the sum of "<<n<<" is "<<sum<<endl;
    }
    void rev();
    void palindrome();

};
void total::rev()
{
   x=n;

   while(x>0)
   {
       i=x%10;
       rv=rv*10+i;
       x=x/10;
   }
   cout<<"the reverse of the number is "<<rv<<endl;
}
void total::palindrome()
{
    if(rv==n)
    {
      cout<<n<<" is palindorme"<<endl;
    }
    else{
        cout<<n<<" is not palindrome\n";
    }
}
int main()
{
    total a[3];
    for(int i=0;i<3;i++)
    {
       a[i].input();
       a[i].magic();
       a[i].sumnum();
       a[i].rev();
       a[i].palindrome();
    }
}