#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    string name;
    int year ;
    public:
    void set(string n,int y){
        name=n;
        year=y;
    }
void display(){
    cout<<"name is:"<<name<<endl<<"year is :"<<year<<endl;
}

    
};
int main(){
    
    Car c[5];
    for(int i=0;i<5;i++){
        c[i].set("tata",i);
         }
    for (int i=0;i<5;i++){
        c[i].display();
    }
    return 0;
}