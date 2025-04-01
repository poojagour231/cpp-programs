#include<iostream>
using namespace std;
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=5,y=4;
    swapPointer(&x,&y);//call by reference
    cout<<"value x: "<<x<<" "<<"value y:"<<y<<endl;

}