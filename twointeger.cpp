#include<iostream>
using namespace std;
int take(int ,int);
int main(){
    int a,b;
    cout<<"enter a two number";
    cin>>a>>b;
    cout<<"enter a number"<<take(a,b);
    return 0;
}
int take(int a ,int b){
    int c=a*b;
    return c;
}
