#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a value for factorial";
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++){

         product*=i;
    }
        cout<<product<<endl;
    



}