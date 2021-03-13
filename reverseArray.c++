#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int i,j,n= sizeof(arr) / sizeof(arr[0]);
    //cout<<n;
    for( i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    //print reverse array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
       

    return 0;
}