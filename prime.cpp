#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(i%n!=0){
        cout<<"prime";
        break;
        }
    }
}