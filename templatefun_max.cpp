// Create a function template to find the maximum of two values of any data type.
#include<iostream>
using namespace std;
template<typename T>
T maxtwovalue(T num1,T num2){
    if (num1 < max){
        max=num2;
    }
    else{
        max=num1;
    }
    return max;
}
int main(){
    int result1;
    double result2;
    result1=max<int>(2,4);
    cout<<result1<<endl;
    result2=max<double>(3.3,4.4);
    cout<<result2<<endl;
}
