//Create a class Game with member functions to simulate a simple game with player 
//actions and scoring. 
#include<iostream>
#include<string>
using namespace std;
class Game{
    public:
    string player ;
    string action ;
    int score ;
    Game(string p,string a,int s){
        player=p;
        action=a;
        score=s;
    }
    void display(){
        cout<<"player name is:"<<player<<endl<<"the action is:"<<action<<endl<<"score is:"<<score<<endl;
    }
    
};
int main(){
    Game g("virat koli","bating",24 );
    g.display();
}
