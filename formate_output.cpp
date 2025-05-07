// Implement a program that reads user input for name, age, and salary, and then displays 
//the information using formatted output
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    double salary;
    cout<<"enter a name:";
    cin>>name;
    cout<<"enter a age:";
    cin>>age;
    cout<<"enter a salary:";
    cin>>salary;
    cout<<"name:"<<name<<endl<<"age :"<<age<<endl<<"salary:"<<salary<<endl;
}