#include<iostream>
using namespace std;
template<class T>
class Number{
    private:
    T num;
    public:
    Number(T n){
        num=n;
    }
    T getnum(){
        return num;
    }
};
int main(){
    Number<int>NumberInt(7);
    Number<double>NumberDouble(7.7);
    cout<<"int number="<<NumberInt.getnum()<<endl;
    cout<<"int number="<<NumberDouble.getnum()<<endl;
}