#include<iostream>
using namespace std;
class Book{
    private:
    string author;
    public:
    Book(string a){
        author=a;
    }
    void display(){
        cout<<"the author is:"<<author<<endl;
    }
};
int main(){
    Book*book[3];
    book[0]=new Book("eistein");
    book[1]=new Book("newton");
    book[2]=new Book("bohr");
    for(int i=0;i<3;i++){
        book[i]->display();
    }
}