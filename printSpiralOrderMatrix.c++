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

    //spiral output print
    int rowStart=0,rowEnd=n-1,colStart=0,colEnd=m-1;

    while(rowStart<=rowEnd && colStart<=colEnd){
        //start row print
        for(int col=colStart;col<=colEnd;col++){
            cout<<matrix[rowStart][col]<<" ";
        }   
        rowStart++;
        //end column print
        for(int row=rowStart;row<=rowEnd;row++){
            cout<<matrix[row][colEnd]<<" ";
        }  
        colEnd--;
        //end row print
        for(int col=colEnd;col>=colStart;col--){
            cout<<matrix[rowEnd][col]<<" ";
        }  
        rowEnd--;
        //start column print;
        for(int row=rowEnd;row>=rowStart;row-- ){
            cout<<matrix[row][colStart]<<" ";
        }
        colStart++;
    }
    return 0;
}