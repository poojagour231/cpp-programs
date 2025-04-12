#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int n1,n2;
    cout<<"enter a number";
    cin>>n1;
    cout<<"enter a number";
    cin>>n2;
    cout<<"enter a sum"<<sum( n1,n2);//actual parameter
}
int sum(int a,int b){//formal parameter
    int c=a+b;
    return c;
}