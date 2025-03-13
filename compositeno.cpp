#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a n";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(i%2==0){
            cout<<"composite";
            break;
        }
    }
}