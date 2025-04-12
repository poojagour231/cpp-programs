#include<iostream>
using namespace std;
int getmax(int,int,int);
int main(){
int n1,n2,n3;
cout<<"enter a 1st number";
cin>>n1;
cout<<"enter a 2nd number";
cin>>n2;
cout<<"enter a 3rd number";
cin>>n3;
cout<<"the getmax"<<getmax(n1,n2,n3);
}
int getmax(int n1,int n2,int n3){
    int max=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    return max;
}