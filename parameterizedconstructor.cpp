#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string name;
    string author;
    Book(string n,string a){
        name=n;
        author=a;
    }

};
int main(){
    Book b1("physics","eistein");
    cout<<b1.name<<" "<<endl<<b1.author<<endl;
}