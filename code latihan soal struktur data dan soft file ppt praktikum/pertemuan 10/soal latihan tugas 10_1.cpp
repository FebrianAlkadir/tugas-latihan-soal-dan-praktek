// soal10_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct Node { int data; Node* next; Node(int v): data(v), next(nullptr) {} };
struct StackLL {
    Node* top;
    StackLL(): top(nullptr) {}
    void push(int v){ Node* n = new Node(v); n->next = top; top = n; }
    int pop(){ if(!top) return INT_MIN; int v = top->data; Node* t = top; top = top->next; delete t; return v; }
    int peek(){ if(!top) return INT_MIN; return top->data; }
    bool isEmpty(){ return top == nullptr; }
    void display(){ Node* p = top; while(p){ cout << p->data << " -> "; p = p->next; } cout << "NULL\n"; }
};

int main(){
    StackLL s;
    s.push(10); s.push(20); s.push(30);
    s.display(); // 30 -> 20 -> 10 -> NULL
    cout << "Top: " << s.peek() << "\n"; // 30
    cout << "Pop: " << s.pop() << "\n";  // 30
    s.display(); // 20 -> 10 -> NULL
    return 0;
}

