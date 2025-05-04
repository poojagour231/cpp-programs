//Create a program that uses function pointers to implement a callback mechanism.
#include <iostream>
using namespace std;

void onSuccess() {
    cout << "Success! Callback function executed.\n";
}

void doTask(bool isDone, void (*callback)()) {
    if (isDone){
        callback();
    } else {
        cout << "Task failed. No callback.\n";
    }
}

int main() {
    doTask(true, onSuccess);  
    doTask(false, onSuccess); 

    return 0;
}
