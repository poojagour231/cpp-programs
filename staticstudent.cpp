#include<iostream>
using namespace std;
class Student{
    private:
    int enrolled;
    public:
    static int totalStudentenrolled;
    Student() {
        
        totalStudentenrolled++;
        cout<<"total enrolled:"<<Student::totalStudentenrolled<<endl; 

    }
};
int Student::totalStudentenrolled=0;
int main(){
  Student S1,S2,S3,S4;
   

}