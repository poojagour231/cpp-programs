#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setname(string j){
        name=j;
    }
    string getname(){
        return name;
    }
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }

};
int main(){
    Person P1;
    P1.setname("pooja");
    P1.setage(18);
    int a=P1.getage();
    cout<<a<<endl;
    string j=P1.getname();
    cout<<j<<endl;
    return 0;
}