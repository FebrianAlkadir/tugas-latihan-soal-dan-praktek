/* Program C++ untuk mengimplementasikan Linear Queue menggunakan array */
#include <iostream>
#define MAX 10
using namespace std;

class Queue {
private:
    int item[MAX];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (rear == MAX - 1)
            return true;
        else
            return false;
    }

    bool isEmpty() {
        if (front == -1 || front > rear)
            return true;
        else
            return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue penuh!" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear++;
            item[rear] = element;
            cout << "Elemen " << element << " dimasukkan ke dalam queue." << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong!" << endl;
        } else {
            cout << "Elemen " << item[front] << " dihapus dari queue." << endl;
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue kosong!" << endl;
        } else {
            cout << "Elemen dalam queue: ";
            for (int i = front; i <= rear; i++)
                cout << item[i] << " ";
            cout << endl;
        }
    }
};

// Program utama
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}

