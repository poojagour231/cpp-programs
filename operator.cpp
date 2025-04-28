#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    double real;
    double imag;
    public:
    ComplexNumber(double r=0.0,double i=0.0){
        real=r;
        imag=i;
    }
    ComplexNumber operator+(ComplexNumber&other){
        return ComplexNumber(real+other.real,imag+other.imag);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};
int main(){
    ComplexNumber c1(3.5,2.5);
    ComplexNumber c2(1.5,4.5);
    ComplexNumber c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}