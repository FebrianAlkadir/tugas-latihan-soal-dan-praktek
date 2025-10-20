#include <iostream>
using namespace std;

struct Pribadi
{
    char Nama[50];
    int Usia;
    float Gaji;
};

int main()
{
    Pribadi p1;

    cout << "Masukan Nama Lengkap: ";
    cin.get(p1.Nama, 50);
    cout << "Masukkan Usia: ";
    cin >> p1.Usia;
    cout << "Masukkan Gaji: ";
    cin >> p1.Gaji;

    cout << "\nMenampilkan Informasi." << endl;
    cout << "Nama: " << p1.Nama << endl;
    cout << "Umur: " << p1.Usia << endl;
    cout << "Gaji: " <<(int)p1.Gaji; // Konversi ke int untuk angka bulat

    return 0;
}

