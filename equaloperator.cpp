#include<iostream>
using namespace std;
class Date{
    private:
    int date1;
    int date2;
    public:
    Date(int d1=0,int d2=0){
        date1=d1;
        date2=d2;
    }
    bool operator==(Date&other){
        return (date1==other.date1&&date2==other.date2);
    }
    void display(){
        cout<<date1<<"=="<<date2<<endl;
    }


};
int main(){
    Date d1(11,18);
    Date d2(11,18);
    Date d3(18,11);
    if(d1==d2){
        cout<<"d1 and d2 are equal"<<endl;

    }
    if(!(d1==d3)){
        cout<<"d1 and d2 are not equal"<<endl;
    }
    return 0;
}
