#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    //matrix input
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];

    //output matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];   
            cout<<" ";  
        }
        cout<<"\n";
    }
    return 0;
}