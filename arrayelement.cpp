#include<iostream>
using namespace std;
int main(){
int array(int arr[],int size);
int arr[]={1,2,3,4,5};
int size=sizeof(arr[0]);
cout<<"array"<<size;
}
int array(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i];
    }
    return size;
}
