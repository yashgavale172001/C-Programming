#include<iostream>
using namespace std;
class fbank
{
    private:
        char name[20];
        long long int acc_no;
        long int bal;
        float roi;
   public:
   fbank()
   {
       cout<<"Enter the accout number"<<endl;
       cin>>acc_no;
       cout<<"Enter the current balance"<<endl;
       cin>>bal;
       cout<<"Enter the name of account holder"<<endl;
       cin>>name;
       cout<<"Enter the rate of interest"<<endl;
       cin>>roi;
   }
   void withdrawal();
   void deposit();
   void simple_intrest();
   void chk_bal();
   void balance();
   int menu();
   ~fbank(){}
};
void fbank::balance()
{
   cout<<"Mr/Ms "<<name<<" Your Current balance is "<<bal<<endl;
}
void fbank::withdrawal()
{
    int amt;
    cout<<"Enter the withdral amount"<<endl;
    cin>>amt;
    if(bal>amt)
    {
        bal-=amt;
        // cout<<name<<"your current balance is"<<bal<<endl;
        balance();
    }
    else{
        cout<<"Sorry "<<name<<" you dont have sufficient balance"<<endl;
    }
}
void fbank::deposit()
{
   int amt;
   cout<<"Enter the deposit amount"<<endl;
   cin>>amt;
   bal+=amt;
   balance();
}
void fbank::chk_bal()
{
   balance();
}
void fbank::simple_intrest()
{
    int si;
    roi/=100;
    si=roi*bal;
    cout<<"Siple intreset got on amount "<<bal<<" is "<<si<<endl;
    bal+=si;
    balance();
}
int fbank::menu()
{
    int op;
    cout<<"1: withdrwal\n2: deposit\n3: check balance\n4: simple interest\n5: Exit"<<endl;
    cout<<"Enter the option"<<endl;
    cin>>op;
    return(op);
}
int main()
{
    fbank a1;
    int ch;
    while(1)
    {
        ch=a1.menu();
        switch(ch)
        {
            case 1:
                a1.withdrawal();
                break;
            case 2:
                a1.deposit();
                break;
            case 3:
                a1.chk_bal();
                break;
            case 4:
                a1.simple_intrest();
                break;
            default:
                cout<<"your entered wrong choise "<<endl;
            case 5:
                exit(0);
        }
    }
   
}