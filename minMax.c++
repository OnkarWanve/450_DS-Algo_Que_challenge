#include<iostream>
using namespace std;
int main()
{
     int arr[] = {1000, 11, 445, 1, 330, 3000};
     int arr_size = 6;
     int min=arr[0],max=arr[0];
     for(int i=1;i<6;i++)
     {
         if(arr[i]<min)
         {
                 min=arr[i];
         }
           
         else if(arr[i]>max)
         {
             max=arr[i];
         }   
     }
     cout<<"Minimum element is:"<<min<<endl;
     cout<<"Maximum element is:"<<max<<endl;
}