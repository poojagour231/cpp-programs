#include<iostream>
using namespace std;
int getmax(int arr[]);
int main(){
    int myarr[5]={1,2,3,4,5};
    int output=getmax(myarr);
    cout<<"the largest"<<output;
    return 0;
}
int getmax(int arr[]){
    int max=arr[0];
    for(int i=1;i<5;++i){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}