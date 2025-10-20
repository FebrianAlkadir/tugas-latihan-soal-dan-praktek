// soal4_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct Stack {
    int top;
    int capacity;
    int *arr;
    Stack(int n): top(-1), capacity(n) { arr = new int[n]; }
    ~Stack(){ delete[] arr; }
    bool isEmpty(){ return top == -1; }
    bool isFull(){ return top == capacity - 1; }
    bool push(int x){
        if(isFull()) return false;
        arr[++top] = x;
        return true;
    }
    int pop(){
        if(isEmpty()) return INT_MIN;
        return arr[top--];
    }
    int peek(){
        if(isEmpty()) return INT_MIN;
        return arr[top];
    }
};

int main(){
    Stack s(3);
    cout << (s.push(10) ? "push 10 ok\n" : "push fail\n");
    cout << (s.push(20) ? "push 20 ok\n" : "push fail\n");
    cout << (s.push(30) ? "push 30 ok\n" : "push fail\n");
    cout << (s.push(40) ? "push 40 ok\n" : "push fail (overflow)\n");
    cout << "Top: " << s.peek() << "\n";
    cout << "pop: " << s.pop() << "\n";
    cout << "pop: " << s.pop() << "\n";
    cout << "pop: " << s.pop() << "\n";
    cout << (s.pop()==INT_MIN ? "Underflow\n" : "something\n");
    return 0;
}

