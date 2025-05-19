//Write a class Distance with a friend function to add two distances.
#include<iostream>
using namespace std;
class Distance{
    private:
    int dis1;
    int dis2;
    public:
    Distance(int d1=0,int d2=0){
        dis1=d1;
        dis2=d2;

    }
    friend int AddDistance(Distance d1,Distance d2);
};
  int AddDistance(Distance d1,Distance d2){
    int Add=d1.dis1+d2.dis2;
    
    return Add+Add;
  }
  int main(){
    Distance d1(5,4);
    Distance d2(5,5);
    int totalAdd=AddDistance(d1,d2);
    cout<<"total ADD"<<totalAdd<<endl;
  }
