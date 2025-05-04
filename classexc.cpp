// Create a custom exception class InvalidAgeException and use it to handle invalid age 
//input in a program.
#include<iostream>
using namespace std;
class InvalidAgeException{
    public:
    string message;
    InvalidAgeException(string msg){
        message=msg;
    }
};
    void checkAge(int age){
        if(age>0 || age<120){
        throw InvalidAgeException("Age between 0 and 120 ");
     } 
     else{
        cout<<"age:"<<age<<" is valid"<<endl;
    }
    }

int main(){
    int age;
    cout<<"enter age";
    cin>>age;

    try{
        checkAge(age);
    }
        catch(InvalidAgeException e){
            cout<<"invalidAgeException"<<e.message<<endl;
        }
    return 0;
}
