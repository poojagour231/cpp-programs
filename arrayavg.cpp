#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum+=arr[i];
    }
    float avg=(float)sum/5;
    cout<<avg;
    return 0;
}