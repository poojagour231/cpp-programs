#include<iostream>
using namespace std;
int sum(int a,int b){
int c=a+b;
return c;
}
int main(){
    int n1,n2;
    cout<<"enter a number";
    cin>>n1;
    cout<<"enter a number";
    cin>>n2;
    cout<<"enter a sum"<<sum(n1,n2);
    return 0;
}