// soal3_2.cpp
#include <bits/stdc++.h>
using namespace std;

struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    int jumlah;
};

int main(){
    vector<Buku> lib;
    // contoh: tambah 2 buku otomatis
    lib.push_back({101, "Taufik", "Algoritma Dasar", 3});
    lib.push_back({102, "Rina", "Struktur Data", 2});
    // tampil semua
    cout << "Semua buku:\n";
    for(auto &b: lib) cout << b.nomorAkses << " | " << b.penulis << " | " << b.judul << " | jml:" << b.jumlah << "\n";
    // cari penulis "Rina"
    string pencari = "Rina";
    cout << "\nBuku penulis " << pencari << ":\n";
    for(auto &b: lib) if(b.penulis == pencari) cout << b.judul << " (No: " << b.nomorAkses << ")\n";
    // hitung jumlah buku berjudul "Struktur Data"
    string jud = "Struktur Data";
    int sum=0;
    for(auto &b: lib) if(b.judul==jud) sum+=b.jumlah;
    cout << "\nJumlah buku judul '"<<jud<<"' = "<<sum<<"\n";
    // kurangi stok buku nomor 101
    for(auto &b: lib) if(b.nomorAkses==101) { if(b.jumlah>0){ b.jumlah--; cout << "\nBuku "<<b.judul<<" diterbitkan. Sisa: "<<b.jumlah<<"\n"; } else cout<<"Stok kosong\n"; }
    return 0;
}

