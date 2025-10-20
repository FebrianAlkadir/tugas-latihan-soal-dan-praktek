// soal3_1.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    int no;
    string nama;
    int usia;
    float nilai;
};

int main(){
    vector<Mahasiswa> v;
    for(int i=1;i<=3;i++){
        Mahasiswa m;
        m.no = i;
        cout << "Masukkan nama mahasiswa " << i << ": ";
        getline(cin, m.nama);
        cout << "Usia: "; cin >> m.usia;
        cout << "Nilai: "; cin >> m.nilai;
        cin.ignore(); // clear newline
        v.push_back(m);
    }
    cout << "\nDaftar Mahasiswa:\n";
    for(auto &m: v){
        cout << m.no << ". " << m.nama << " | Usia: " << m.usia << " | Nilai: " << m.nilai << "\n";
    }
    return 0;
}

