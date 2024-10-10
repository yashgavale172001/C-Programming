#include<iostream>
using namespace std;
int main(){

    int row,col;
    cin>>row;
    cin>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==0){
                if(j==0){
                    cout<<"*";
                }
                else if(j>=col/2){
                 cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==row/2){
                cout<<"*";
            }
            else if(i==row-1){
                if(j<=col/2){
                    cout<<"*";
                }
                else if(j==row-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(i<row/2){
                    if(j==0 || j==col/2){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else if(i>row/2){
                    if(j==col-1 || j==col/2){
                        cout<<"*";
                    }
                    else{

                    cout<<" ";
                    }
                }

            }
        }
        cout<<endl;
    }
    return 0;
}