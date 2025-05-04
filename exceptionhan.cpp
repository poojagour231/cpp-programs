// Implement a program that demonstrates the use of the finally block to release resources 
//in exception handling
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

