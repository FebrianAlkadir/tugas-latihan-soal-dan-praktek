// soal2_5.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    uintptr_t addr_given = 0x12EF; // &x[1][1][4]
    size_t elem = 4;
    size_t D2 = 3, D3 = 5;
    size_t i_g=1,j_g=1,k_g=4;
    uintptr_t base = addr_given - ((i_g*D2*D3 + j_g*D3 + k_g) * elem);
    size_t i=0,j=0,k=3;
    uintptr_t addr_target = base + ((i*D2*D3 + j*D3 + k) * elem);
    cout << hex << "Base=0x" << base << "\n";
    cout << "Address x[0][0][3] = 0x" << addr_target << dec << "\n";
    return 0;
}

