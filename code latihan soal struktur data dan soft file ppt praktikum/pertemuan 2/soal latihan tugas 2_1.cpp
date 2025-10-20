// soal2_1.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    uintptr_t base = 0x1000; // alamat &x[0]
    size_t elemSize = 1;     // sizeof(char) = 1 byte
    size_t index = 8;
    uintptr_t addr = base + index * elemSize;
    cout << "Base address: 0x" << hex << base << dec << "\n";
    cout << "Address of x[8] = 0x" << hex << addr << dec << "\n";
    return 0;
}

