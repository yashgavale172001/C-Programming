#include<iostream>
#include<string>
using namespace std;
class Shop
{
   int itemId[100];
   int itemPrice[100];
   int counter;

   public:
   void initcounter()
   {
    counter=0;
   }
   void setPrice();
   void display();
};
void Shop::setPrice()
{
    cout<<"Enter the item id "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the item price "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::display()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"item Id is "<<itemId[i]<<" And price of Item is "<<itemPrice[i]<<endl;
    }
}
int main()
{
  Shop s;
  s.initcounter();
  s.setPrice();
  s.setPrice();
  s.setPrice();
  s.display();
}