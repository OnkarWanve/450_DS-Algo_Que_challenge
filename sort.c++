//Sort an array of 0s, 1s and 2s
//dutch national flag
#include<iostream>
using namespace std;
void sort012(int arr[],int n)
{
    int l=0;
    int h=n-1;
    int mid=0;

    while(mid<=h)
    {
        switch(arr[mid])
        {
            case 0:swap(arr[l++],arr[mid++]);
            break;
            case 1:mid++;
            break;
            case 2:swap(arr[h--],arr[mid]);
            break;
        }
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[]={0,0,1,0,2,1,0,2,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    cout<<"Array after sorting"<<endl;
    printArray(arr,n);
        return 0;
}