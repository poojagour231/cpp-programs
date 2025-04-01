#include<iostream>
using namespace std;
inline int square(int a,int b,int c){
    return a*b*c;
}
int main(){
    int a,b,c;
    cout<<"enter a value a,b,c";
    cin>>a>>b>>c;
    cout<<"the value of a,b,c"<<square(a,b,c);
}

