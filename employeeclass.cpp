#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string name;
    string position;
    double salary;
    public:
    Employee(string a,string p,double s){
        name=a;
        position=p;
        salary=s;
    }
    void display(){
        cout<<name<<endl<<position<<endl<<salary<<endl;
    }
};
int main(){
    Employee E1("pooja","cs",25000);
    E1.display();
    return 0;
}