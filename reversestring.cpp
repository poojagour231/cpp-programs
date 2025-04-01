#include<iostream>
#include<string>
using namespace std;
int main(){
     string str,reversedstr;
    cout<<"enter a string";
    cin>>str;
    for(int i=str.length()-1;i>=0;i--){
        reversedstr+=str[i];
    }
    cout<<reversedstr<<endl;

}