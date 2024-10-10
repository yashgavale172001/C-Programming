// #include<iostream>
// using namespace std;
// int main()
// {
//     char c=65;
//     int i=c;
//     char*p=&c;
//     int*pc=(int*)p;

//     cout<<*p<<endl;
//     cout<<*pc;
// }
// #include<iostream>
// using namespace std;
#include <iostream>
using namespace std;

void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    updateValue((int*)&ch);
    cout << ch;
}