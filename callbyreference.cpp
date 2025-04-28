#include<iostream>
using namespace std;
void incrementbyTen(int &num){
    num+=10;
}
int main(){
    int value;
    cout<<"enter a number:";
    cin>>value;
    incrementbyTen(value);
    cout<<"after increment:"<<value<<endl;
    return 0;
}