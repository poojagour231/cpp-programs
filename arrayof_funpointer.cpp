// Implement a program that uses an array of function pointers. 
#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    cout<<"it is element of array"<<endl;
    cout<<"output is:"<<endl;
    for(int i=0;i<5;i++){
        cout<<*p<<endl;
        p++;
    }
    
}