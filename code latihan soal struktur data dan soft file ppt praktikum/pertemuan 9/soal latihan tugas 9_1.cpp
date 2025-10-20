// soal9_1.cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int v): data(v), next(nullptr) {}
};

struct SList {
    Node *head;
    SList(): head(nullptr) {}
    void insertFront(int v){ Node* n = new Node(v); n->next = head; head = n; }
    void insertEnd(int v){
        Node* n = new Node(v);
        if(!head){ head = n; return; }
        Node* p = head; while(p->next) p = p->next;
        p->next = n;
    }
    bool remove(int v){
        if(!head) return false;
        if(head->data == v){ Node* t = head; head = head->next; delete t; return true; }
        Node* p = head;
        while(p->next && p->next->data != v) p = p->next;
        if(p->next){
            Node* t = p->next;
            p->next = t->next;
            delete t;
            return true;
        }
        return false;
    }
    void display(){ Node* p = head; while(p){ cout << p->data << " -> "; p = p->next; } cout << "NULL\n"; }
};

int main(){
    SList L;
    L.insertEnd(11); L.insertEnd(22); L.insertFront(5);
    L.display(); // 5 -> 11 -> 22 -> NULL
    L.remove(11);
    L.display(); // 5 -> 22 -> NULL
    return 0;
}

