#include<iostream>
using namespace std;
int main(){
    int n;
    int r=;
    cout<<"enter a number";
    cin>>n;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        r=r*10;
        r=r+ld;
        n=n%10;
        sum+=r;

    }
    cout<<sum;
}