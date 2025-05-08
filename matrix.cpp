//61.	Write a C++ program to add two matrices using nested for loops.
#include<iostream>
using namespace std;
int main(){
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int sum[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"sum of matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
