#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,6,7,8};
    int mx=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>mx)
        mx=arr[i];
    }
    cout<<mx;
    return 0;
}