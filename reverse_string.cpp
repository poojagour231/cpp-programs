//47.	Write a C++ program to reverse a given string using a for loop.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, reversedstr;
    cout<<"enter a str";
    cin>>str;
     for(int i=5;i>=0;i--){
          reversedstr+=str[i];
     }
     cout<<"name is:"<<reversedstr<<endl;

}