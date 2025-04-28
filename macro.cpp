#include<iostream>
using namespace std;
#define pi 3.14
#define square(r)((r)*(r))
int main(){
    int r;
    cout<<"enter a redius";
    cin>>r;
    double area=pi*square(r);
    cout<<"the value of "<<area;
    
}