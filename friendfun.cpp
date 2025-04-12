#include<iostream>
using namespace std;
class Myclass{
    private:
    int data;
    public:
     Myclass(int val){
        data=val;
     }
     friend void display(Myclass obj);
};
void display(Myclass obj){
    cout<<"value"<<obj.data<<endl;
}
int main(){
    Myclass obj(42);
    display(obj);
    return 0;
}