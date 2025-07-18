#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row=3;
    int col=3;
    int mat[row][col];

    //inpout
    for(int i=0;i<row;i++){
        for(int j=0;i<col;j++){
            cout<<"Enter the Element of Matrix"<<endl;
            cin>>mat[i][j];
        }
    }
    //output
    for(int i=0;i<row;i++){
        for(int j=0;i<col;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    return 0;
}