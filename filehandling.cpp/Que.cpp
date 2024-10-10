#include <iostream>
#include <fstream>
using namespace std;
struct employee
{
    char name[30];
    int id;
    float salary;
};
int main()
{
    employee e[3];
    int i, j, k;
    for (j = 0; j <= 2; j++)
    {
        cout << "enter name of employee" << endl;
        cin >> e[j].name;
        cout << "enter id of employee" << endl;
        cin >> e[j].id;
        cout << "enter salary of employee" << endl;
        cin >> e[j].salary;
    }
    // ifstream inf("file.dat");
    // for (i = 0; i <= 2; i++)
    // {
    //     inf >> e[i].name;
    //     cout << e[i].name << endl;
    //     inf >> e[i].id;
    //     cout << e[i].id << endl;
    //     inf >> e[i].salary;
    //     cout << e[i].salary << endl;
    // }
    // inf.close();
    ofstream outf("file.dat");
    outf << "Name"
         << "\t \t"
         << "id"
         << "\t \t"
         << "salary"
         << "\t \t" << endl;
    for (k = 0; k <= 2; k++)
    {
        outf << e[k].name << "\t \t";
        outf << e[k].id << "\t  \t";
        outf << e[k].salary << endl;
    }
    outf.close();
}