// soal6_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct LinQueue {
    int *Q;
    int front, rear, capacity;
    LinQueue(int n): front(-1), rear(-1), capacity(n) { Q = new int[n]; }
    ~LinQueue(){ delete[] Q; }
    bool isEmpty(){ return front == -1 || front > rear; }
    bool isFull(){ return rear == capacity -1; }
    bool enqueue(int x){
        if(isFull()) return false;
        if(front == -1) front = 0;
        Q[++rear] = x;
        return true;
    }
    int dequeue(){
        if(isEmpty()) return INT_MIN;
        int val = Q[front++];
        if(front > rear) front = rear = -1;
        return val;
    }
    void reset(){ front = rear = -1; }
};

int main(){
    LinQueue q(5);
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    cout << "Dequeue: " << q.dequeue() << "\n"; // 10
    q.enqueue(40); q.enqueue(50); q.enqueue(60);
    cout << (q.enqueue(70) ? "enq ok\n" : "enq failed (full)\n");
    q.reset();
    cout << "After reset, enqueue 100: " << (q.enqueue(100) ? "ok\n" : "fail\n");
    return 0;
}

