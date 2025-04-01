#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;
   public: //properties
    string name;
    string dept;
    string subject;
    
    //member function
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter
    void setsalary(double s){
        salary=s;
    }
    //getter
    double getsalary(){
        return salary;
    }

};
int main(){
    teacher t1;//object
    t1.name="pooja";
    t1.subject="c++";
    t1.dept="cs";
    t1.setsalary(250000);
    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
    

}

