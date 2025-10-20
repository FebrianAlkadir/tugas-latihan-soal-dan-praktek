// soal8_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct DequeArr {
    int *a; int front, rear, n;
    DequeArr(int size): front(-1), rear(-1), n(size) { a = new int[size]; }
    ~DequeArr(){ delete[] a; }
    bool isFull(){ return (front == 0 && rear == n-1) || (front == rear + 1); }
    bool isEmpty(){ return front == -1; }
    bool insertRear(int x){
        if(isFull()) return false;
        if(isEmpty()){ front = rear = 0; a[rear]=x; return true; }
        if(rear == n-1) rear = 0; else rear++;
        a[rear] = x; return true;
    }
    bool insertFront(int x){
        if(isFull()) return false;
        if(isEmpty()){ front = rear = 0; a[front]=x; return true; }
        if(front == 0) front = n-1; else front--;
        a[front] = x; return true;
    }
    int deleteFront(){
        if(isEmpty()) return INT_MIN;
        int val = a[front];
        if(front == rear) front = rear = -1;
        else if(front == n-1) front = 0; else front++;
        return val;
    }
    int deleteRear(){
        if(isEmpty()) return INT_MIN;
        int val = a[rear];
        if(front == rear) front = rear = -1;
        else if(rear == 0) rear = n-1; else rear--;
        return val;
    }
};

int main(){
    DequeArr d(5);
    d.insertRear(10); d.insertRear(20);
    d.insertFront(5);
    cout << "DeleteFront: " << d.deleteFront() << "\n"; // 5
    cout << "DeleteRear: " << d.deleteRear() << "\n";  // 20
    return 0;
}

