#include <stdio.h>
void printarray(int arr[], int size)
{
    int i;
    printf("array is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int max(int arr[], int size)
{
    int i,lrg=0;
    for (i=0;i<size;i++)
    {
        if(arr[i]>lrg)
        {
           lrg=arr[i];
        }
    }
    return lrg;
}
int min(int arr[],int size)
{
    int i,small=0;
    for (i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
           small=arr[i];
        }
    }
    return small;
}
int main()
{
    int size, mx, mn;
    int arr[] = {2, 5, 74, -45, 36, -23, 38, 69, 33};
    size = sizeof(arr) / sizeof(int);
    printarray(arr, size);
    mx = max(arr, size);
    printf("maximun number is %d\n",mx);
    mn = min(arr, size);
    printf("minimum element in the array is %d",mn);
}