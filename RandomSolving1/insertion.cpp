 #include <iostream>
 using namespace std;
 void display(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
        
     }
      cout<<endl;
     
 }
 int idxdisplay(int i,int arr[],int size,int index,int Maxsize,int num)
 {
     if(size>=Maxsize)
     {
         cout<<"insertion not possible"<<endl;
         return -1;
     }
     for (int i=size-1;i>=index;i--)
     {
         arr[i+1]=arr[i];
     }
     arr[index]=num;
     
     return 1;
 }
 int main()
 {
     int i,size,index,Maxsize,num;
     int arr[100]={1,17,33,18,20,14,22};
     display(arr,7);
     cout<<"Enter the size: ";
     cin>>size;
     cout<<"Ether the max size:";
     cin>>Maxsize;
     cout<<"enter the index: "<<endl;
     cin>>index;
     cout<<"Enter the number :"<<endl;
     cin>>num;
     idxdisplay(i,arr,size,index,100,num);
     size++;
     display(arr,size);
     return 0;



