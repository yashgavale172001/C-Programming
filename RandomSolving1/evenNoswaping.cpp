#include<iostream>
using namespace std;
int main()
{
    int arr[]={45,8,75,29,5,49,56,22,14,497,288,18,2};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(arr[i]%2==0)
            {
                if(arr[j]%2==0)
                {
                    if(arr[i]>arr[j])
                    {
                        int temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
        }
            
        
    }
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}


// #include <iostream>
// using namespace std;
// int main ()
// {
//     int n;
//     cin >>n;
//     int arr[n];
    
//     for (int i=0;i<n; i++){
//         cin >>arr[i];
//     }

//     for (int i=0;i<n;i++){
//         for (int j=i+1;j<n;j++){

//              if (arr[i]%2==0)
//              {

//                 if (arr[i]>arr[j]){
//                     int temp=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=temp;

//                 }
//              }
//         }
//     }

//    for (int i=0;i<n;i++)
//    {
//        cout <<arr[i]<<" ";
//    }
//    return 0;
// }