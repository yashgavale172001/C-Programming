#include<stdio.h>
void array(int a[],int size)
{
    int i,j;
    printf("enter your array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
   
}
void search(int a[],int size)
{
  int num,i,m=0,count=0;
  printf("number that you want to search ");
  scanf("%d",&num);
  for(i=0;i<size;i++)
  {
    if(a[i]==num)
    {
      m=1;
      printf("%d found at index %d\n",num,i);
      count++;
    }
    
  }
  if(m==1)
  {
    printf("%d found  %d times\n",num,count);
  }
  if(m==0)
  {
    printf("%d not found",num);
  }
}
int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    array(a,n);
    search(a,n);

}