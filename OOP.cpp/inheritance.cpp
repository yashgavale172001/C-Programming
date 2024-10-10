// just read it carefully



#include <iostream>
using namespace std;

class vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;
};
class car : public vehicle
{
public:
    int seats;
    void print()
    {
        cout << color;
        cout << numTyres;
    }
};
class supercar : private car
{
    public:
    int sex;
    void print3()
    {
          cout<<numTyres;
    }
};
// class ultrasuper:public supercar
// {
//    void threesum()
//    {
//     cout<<seats;
//     cout<<numTyres;
//     cout<<sex;
//    }
// };
int main()
{
    vehicle v;
    v.color="red";
    car c;
    c.print();
    supercar s;
    s.print3();
}