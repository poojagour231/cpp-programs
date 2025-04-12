#include<iostream>
using namespace std;
long fact(int n);
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
cout<<"enter a number"<<fact(n);
return 0;
    
}
long fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}

