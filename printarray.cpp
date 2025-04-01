#include<iostream>
using namespace std;
int array(int arr);
int main(){
 int arr[5]={1,2,3,4,5};
cout<<"the element of arr"<<arr[5];
return 0;
}
int array(int arr){
    for(int i=0;i<5;i++){
    cout<<i;
    }
    return arr;
}

