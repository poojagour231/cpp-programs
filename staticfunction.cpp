#include<iostream>
using namespace std;
class Counter{
    public:
     static int count;
    Counter(){
        count++;

    }
    
};
int Counter::count=0;
int main(){
    Counter c1,c2,c3;
    cout<<"total object created:"<<Counter::count<<endl;
    return 0;
}