#include <iostream >
using namespace std ;

int main (){

 int num , n , count =0;
 cin >>num >> n;
  
  while (num!=0){

      int a = num %10;
      if (a==n){ 
      count++;}
      num=num/10;
 }
 cout<<count;

  return 0;
}