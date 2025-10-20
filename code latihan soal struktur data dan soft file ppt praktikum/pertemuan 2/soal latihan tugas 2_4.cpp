// soal2_4.cpp
#include <iostream>
using namespace std;
int main(){
    uintptr_t base = 0x1000;
    size_t elemSize = 8;
    size_t cols = 14;
    size_t i = 2, j = 4;
    uintptr_t addr = base + ((i * cols) + j) * elemSize;
    cout << hex << "Address x[2][4] = 0x" << addr << dec << "\n";
    return 0;
}

