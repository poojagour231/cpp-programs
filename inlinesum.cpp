#include<iostream>
using namespace std;
inline int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter a value of a,b";
    cin>>a>>b;
    cout<<"the a value of a,b "<<sum(a,b);
}