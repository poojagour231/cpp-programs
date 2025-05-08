//24.	Write a C++ program to demonstrate the use of reinterpret_cast to convert an int to a char.
#include<iostream>
using namespace std;
int main(){
    int num=65;
    char*charPtr=reinterpret_cast<char*>(&num);
    cout<<"interger value:"<<num<<endl;
    cout<<"convert value:"<<*charPtr<<endl;
    return 0;

}