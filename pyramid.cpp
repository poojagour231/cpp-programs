#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
    cout<<" ";
     
}
    for(int j=1;j<=i;j++){
    cout<<"a" ;
    }

    cout<<endl;
}
return 0;
}