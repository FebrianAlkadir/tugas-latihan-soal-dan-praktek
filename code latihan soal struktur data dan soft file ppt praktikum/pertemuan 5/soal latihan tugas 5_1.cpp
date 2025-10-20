// soal5_1.cpp
#include <iostream>
#include <climits>
using namespace std;

struct DoubleStack {
    int *arr;
    int size;
    int top1, top2;
    DoubleStack(int n): size(n), top1(-1), top2(n) { arr = new int[n]; }
    ~DoubleStack(){ delete[] arr; }
    bool push1(int x){ if(top1 + 1 == top2) return false; arr[++top1] = x; return true; }
    bool push2(int x){ if(top1 + 1 == top2) return false; arr[--top2] = x; return true; }
    int pop1(){ if(top1 == -1) return INT_MIN; return arr[top1--]; }
    int pop2(){ if(top2 == size) return INT_MIN; return arr[top2++]; }
};

int main(){
    DoubleStack ds(6);
    ds.push1(10); ds.push1(20); ds.push1(30);
    ds.push2(90); ds.push2(80);
    cout << "pop1: " << ds.pop1() << "\n"; // expect 30
    cout << "pop2: " << ds.pop2() << "\n"; // expect 80
    // fill to overflow example
    ds.push2(70); ds.push2(60); // may cause overflow depending state
    bool ok = ds.push1(40);
    cout << (ok? "push1 ok\n" : "push1 overflow\n");
    return 0;
}

