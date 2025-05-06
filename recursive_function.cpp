//Write a program to demonstrate the concept of recursive functions.
#include<iostream>
using namespace std;
int factorial(int n){
if(n==0||n==1)
return 1;
else
 return n*factorial(n-1);
}
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int factorial (int n);
    if(num<0){
    cout<<"this is no factorial of negative no."<<endl;
 } else{
     int result=factorial( num);
    cout<<"this is factorial:"<<num<<endl ;   
}
}
