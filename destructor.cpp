#include<iostream>
using namespace std;
class Filehandler{
    public:
    Filehandler(){
        cout<<"Constructor open file"<<endl;
    }
    ~Filehandler(){
        cout<<"destructor close file"<<endl;
    }

};
int main(){
    Filehandler f1;
}