//21.	Write a C++ program to demonstrate the use of static_cast by converting an int to a double and vice versa.
#include<iostream>
using namespace std;
int main(){
    //convert int to double
    int intvalue=6;
    double doublevalue=static_cast<double>(intvalue);
    cout<<"original intvalue:"<<intvalue<<endl;
    cout<<"convert value:"<<doublevalue<<endl;

    //convert double to int
    double doubleval=4.57;
    int intval=static_cast<int>(doubleval);
    cout<<"original double value:"<<doubleval<<endl;
    cout<<"convert value:"<<intval<<endl;
    return 0;
}