#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of square matrix:";
    cin>>n;
    int matrix[n][n];//square matrix
    //matrix input
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            //swapp 
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
            
        }
    }
    cout<<"Transpose of matrix"<<endl;
     //output matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];   
            cout<<" ";  
        }
        cout<<"\n";
    }
    return 0;
}