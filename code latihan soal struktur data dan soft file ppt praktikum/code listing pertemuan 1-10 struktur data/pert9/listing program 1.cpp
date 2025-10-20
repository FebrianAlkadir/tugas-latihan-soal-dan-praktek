/* Program C++ untuk mengimplementasikan Linear Singly Linked List */
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Menambahkan elemen di depan
    void insertDepan(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Elemen " << value << " dimasukkan di depan." << endl;
    }

    // Menambahkan elemen di akhir
    void insertBelakang(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            cout << "Elemen " << value << " dimasukkan sebagai elemen pertama." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        cout << "Elemen " << value << " dimasukkan di belakang." << endl;
    }

    // Menghapus elemen berdasarkan nilai
    void hapus(int value) {
        Node* temp = head;
        Node* prev = NULL;

        if (temp != NULL && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Elemen " << value << " dihapus dari list." << endl;
            return;
        }

        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Elemen " << value << " tidak ditemukan." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Elemen " << value << " dihapus dari list." << endl;
    }

    // Menampilkan seluruh elemen dalam list
    void tampilkan() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "List kosong." << endl;
            return;
        }

        cout << "Isi Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Program utama
int main() {
    LinkedList list;

    list.insertDepan(10);
    list.insertDepan(20);
    list.insertBelakang(5);
    list.insertBelakang(15);
    list.tampilkan();

    list.hapus(10);
    list.tampilkan();

    return 0;
}

