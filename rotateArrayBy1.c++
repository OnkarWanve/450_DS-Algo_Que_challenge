#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    int arr[]={1,5,3,7,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    rotate(arr,n);
    cout<<"array after rotation:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";



    return 0;
}