// soal4_2.cpp
#include <iostream>
#include <climits>
using namespace std;

int main(){
    const int CAP = 10;
    int arr[CAP]; int top=-1;
    while(true){
        int x; cout<<"Input nilai (999 untuk selesai): "; cin>>x;
        if(x==999) break;
        if(x>=60){
            if(top < CAP-1) arr[++top]=x;
            else cout<<"Stack Penuh\n";
        } else {
            if(top>=0) cout<<"POP -> "<< arr[top--] << "\n";
            else { cout << "Stack Kosong\n"; break; }
        }
    }
    cout << "Mengosongkan sisa stack:\n";
    while(top>=0) cout << arr[top--] << " ";
    cout << "\n";
    return 0;
}

