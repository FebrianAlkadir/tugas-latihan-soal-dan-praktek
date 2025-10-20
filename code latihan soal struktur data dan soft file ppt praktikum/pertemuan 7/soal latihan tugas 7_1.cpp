// soal7_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct CircularQueue {
    int *arr; int front, rear, capacity;
    CircularQueue(int n): front(-1), rear(-1), capacity(n) { arr = new int[n]; }
    ~CircularQueue(){ delete[] arr; }
    bool isEmpty(){ return front == -1; }
    bool isFull(){ return (front == (rear + 1) % capacity); }
    bool enqueue(int x){
        if(isFull()) return false;
        if(isEmpty()) front = 0;
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        return true;
    }
    int dequeue(){
        if(isEmpty()) return INT_MIN;
        int val = arr[front];
        if(front == rear) front = rear = -1;
        else front = (front + 1) % capacity;
        return val;
    }
    int count(){
        if(isEmpty()) return 0;
        if(rear >= front) return rear - front + 1;
        return capacity - (front - rear - 1);
    }
};

int main(){
    CircularQueue q(5);
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    cout << "Count: " << q.count() << "\n"; // 3
    q.dequeue();
    q.enqueue(40); q.enqueue(50); // might fill
    cout << "Enqueue 60: " << (q.enqueue(60) ? "ok":"fail") << "\n";
    cout << "Count now: " << q.count() << "\n";
    return 0;
}

