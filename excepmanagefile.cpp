// Write a program that uses exception handling to manage file input/output errors.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string filename;
    cout<<"enter a filename:";
    cin>>filename;
    ifstream file;
try{
    file.open(filename);
    if(!file.is_open()){
        throw runtime_error("error not open file");
    }
       
    
    file.close();

}
catch(runtime_error &e){
    cout<<"Error:"<<e.what();
}
return 0;
}