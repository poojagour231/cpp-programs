#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;

}
int main(){
    int a, b;
    cout<<"enter a value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the value of a,b"<<product(a,b);
}