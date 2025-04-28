#include<iostream>
#include<string>
using namespace std;
class Bankaccount {
    public:
    string name;
    int accountnumber;
    double balance;
    Bankaccount (string n,int a,double b){
        name=n;
        accountnumber=a;
        balance=b;
    }
        void display(){
            cout<<"name is:"<<name<<endl<<"accountnumber is:"<<accountnumber<<endl<<"balance is:"<<balance<<endl;
        
        }
    
};
int main(){
    Bankaccount b1("pooja",1234,280000);
    b1.display();
    return 0;
}