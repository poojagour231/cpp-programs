//7. Implement a class Cache with member functions to store and retrieve cached data.
#include<iostream>
#include<string>
using namespace std;
class Cache{
    public:
    string store;
    int retrieve;
    Cache(string s,int r){
        store=s;
        retrieve=r;
    }
    void display(){
        cout<<"store is:"<<store<<endl<<"retrieve is:"<<retrieve<<endl;
    }
};
int main(){
    Cache c("pooja",50);
    c.display();
    
}