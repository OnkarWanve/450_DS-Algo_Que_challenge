#include<iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            //swap arr[i] and arr[j]
           swap(&arr[i], &arr[j]); 
            
        }
    }
            swap(&arr[i + 1], &arr[r]); 
            return (i+1);
}
void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, l, pi - 1); 
        quickSort(arr, pi + 1, r); 
    }
}

int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 