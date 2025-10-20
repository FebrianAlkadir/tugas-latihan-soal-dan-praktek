// soal2_2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    uintptr_t addr_x3 = 0x1000; // alamat x[3]
    size_t elemSize = 4; // sizeof(int)
    size_t idx_given = 3;
    size_t idx_target = 9;
    uintptr_t base = addr_x3 - idx_given * elemSize;
    uintptr_t addr = base + idx_target * elemSize;
    cout << "Address of x[9] = 0x" << hex << addr << dec << "\n";
    return 0;
}

