// #include<iostream>
// using namespace std;
// int main()
// {
//     int n1,n2,n3,num;
//     n1=0;
//     n2=1;
//     cout<<"series upto :"<<endl;
//     cin>>num;
//     cout<<n1<<" "<<n2<<" ";
//     for(int i=2;i<=num;++i)
//     {
//         n3=n1+n2;
//         cout<<n3<<" ";
//         n1=n2;
//         n2=n3;
//     }
//     return 0;
    
// }






// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number upto you want to find the fibonacci series"<<endl;
//     cin>>n;
//     int n1,n2;
//     n1=1;
//     n2=1;
//     cout<<n1<<" "<<n2<<" ";
//     for(int i=2;i<n;i++)
//     {
//         int n3=n1+n2;
//         cout<<n3<<" ";
//         n1=n2;
//         n2=n3;
//     }
// }

#include<iostream>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        long int n3;  
       long int n1=1,n2=1,num;
        cin>>num;
        if(num=1)
        {
                cout<<1;
        }
        else if(num=2)
        {
                cout<<1;
        }
        else{
            for(int i=3;i<=num;i++)
            {
                n3=n1 + n2;
                n1=n2;
                n2=n3;
            }
         cout<<n3;
        }
        

}

























