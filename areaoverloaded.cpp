#include<iostream>
using namespace std;
int area(int r){
    return (3.14*r*r);
}
int area(int l,int b){
    return (l*b);
}
int area(int, int b,int h){
    return(1/2*(b*h));
}
int main(){
    cout<<"the area of circle of 3.14,5,5 :"<<area(5)<<endl;
    cout<<"the area of rectangle of 5,6:"<<area(5,6)<<endl;
    cout<<"the area of triangle of1/2, 5,5 :"<<area( 1/2,5,5)<<endl;
}

    
