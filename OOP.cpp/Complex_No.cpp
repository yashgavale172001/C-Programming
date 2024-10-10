#include<iostream>
using namespace std;
class complex
{
    public:
    int real,img;

    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void plus(complex c2)
    {
         real=real+c2.real;
         img=img+c2.img;
    }
    void multiply(complex c2)
    {
        real=real*c2.real;
        img=img*c2.img;
    }
    void print()
    {
        cout<<"Complex number is "<<real<<" + "<<img<<"i";
    }
};
int main()
{
    int real1,real2,img1,img2;
    cin>>real1>>img1;
    cin>>real2>>img2;

    complex c1(real1,img1);
    complex c2(real2,img2);

    int choice;
    cout<<"Enter choice "<<endl; 
    cin>>choice;

    if(choice==1)
    {
        c1.plus(c2);
        c1.print();
    }
    if(choice==2)
    {
        c1.multiply(c2);
        c1.print();
    }
}