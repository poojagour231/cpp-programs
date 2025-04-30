//. Implement an abstract class Payment with a pure virtual function processPayment(). 
//Create derived classes CreditCardPayment and DebitCardPayment.
#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void processPayment(double amount)=0;   
};
class CreditcardPayment:public Payment{
    public:
    void processPayment(double amount)override{
       cout<<"processPayment"<<amount<<endl;
       cout<<"creditcardpayment"<<endl;
    }
};
class DebitcardPayment:public Payment{
    public:
    void processPayment(double amount)override{
        cout<<"processPayment"<<amount<<endl;
        cout<<"debitcardpayment"<<endl;
    }
};
int main(){
    Payment*p;
    CreditcardPayment credit;
    DebitcardPayment debit;
    p=&credit;
    p->processPayment(20000);
    p=&debit;
    p->processPayment(300000);
}
