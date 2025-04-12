#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4, y=5;
    swap(x,y);
    cout<<x<<" "<<y<<endl;


}