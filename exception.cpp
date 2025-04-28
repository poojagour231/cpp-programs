#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    try{
        int a=10;
        int b=0;
        int c;
        if(b==0){
            throw runtime_error("division by zero not allowed");
        }
        c=a/b;
        cout<<"c after division"<<c<<endl;

    }
    catch(const exception &e){
        cout<<"exception"<<e.what()<<endl;
    }
    return 0;
}
