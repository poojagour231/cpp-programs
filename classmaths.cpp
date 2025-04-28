#include<iostream>
using namespace std;
class Maths{
    public:
    static int add (int a=0, int b=0){
        return a+b;
    }
    

    
};
int main(){
   cout<<Maths::add()<<endl;
   cout<<Maths::add(4,5)<<endl;
   return 0;
}