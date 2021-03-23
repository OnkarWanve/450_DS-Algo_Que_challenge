#include<iostream>
using namespace std;
int main()
{   
    int n,m,key;

    cout<<"Enter the rows amd colums"<<endl;
    cin>>n>>m;
    int matrix[n][m];
     //matrix input
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
     cout<<"Enter the element to be searched";
    cin>>key;
    //searching element
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(matrix[i][j]==key){
           cout<<"Element found at:["<<i<<"]["<<j<<"]";
           flag=1;
           }
        }   
    }
    if(!flag)
    cout<<"Element not found";
    return 0;
}