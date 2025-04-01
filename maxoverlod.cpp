#include<iostream>
using namespace std;
int max(int a,int b){
    return (a,b);
}
int max(int a,int b,int c){
    return(a,b,c);
}
int main(){
    cout<<"the maximum number of 5,6 : "<<max(5,6)<<endl;
    cout<<"the maximum number of 7,8,9 : "<<max(7,8,9)<<endl;
}