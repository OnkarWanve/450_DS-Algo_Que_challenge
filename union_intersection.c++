#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printUnion(int a[],int n,int b[],int m)
{
    // //defining map container mp
    // map<int,int>mp;
    // // Inserting array elements in mp
    // for(int i=0;i<n;i++)
    // mp.insert({a[i],i});
    // for(int i=0;i<m;i++);
    // mp.insert({b[i],i});
    // cout<<"Union set of two arrays";
    // for(auto itr=mp.begin();itr1=mp.end();itr++)
    // cout<<itr->first<<" ";
    // Defining map container mp
    map<int, int> mp; 
   
    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        mp.insert({ a[i], i }); 
   
    for (int i = 0; i < m; i++)
        mp.insert({ b[i], i });
    cout << "The union set of both arrays is :" << endl;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << " "; // mp will contain only distinct
                     // elements from array a and b
}
int main()
{
    int a[7] = { 1, 2, 5, 6, 2, 3, 5 }; 
    int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 }; 
 
    printUnion(a, 7, b, 9); 
}