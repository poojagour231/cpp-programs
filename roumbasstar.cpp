#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}