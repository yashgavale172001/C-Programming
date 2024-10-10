#include <iostream>
using namespace std;
class car
{
    public:
    void model();
};
class bicycle
{
    public:
    string model_name="hero";
    
    // vehicle v;
    // v.height=7.3;
};
class vehicle
{
    public:
        string color="red";
    protected:
        float height;
    private:
        int model_no;
    
    friend void car::model();
    friend void print();
    friend class bicycle;
};
void print()
{
    vehicle v;
     cout<<v.height;
}
void car::model()
{
    vehicle v;
    v.height=6.2;
    v.model_no=1954;
    cout<<v.height<<" "<<v.color<<" "<<v.model_no;
}
int main()
{
    car c;
    c.model();
}