// Create a class template Queue with member functions to enqueue, dequeue, and display element.
#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front = 0, rear = -1;

public:
    void enqueue(T val) { arr[++rear] = val; }

    void dequeue() {
        if (front > rear) cout << "Empty\n";
        else cout << "Dequeued: " << arr[front++] << endl;
    }

    void display() {
        if (front > rear) cout << "Empty\n";
        else {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};
int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();
}

