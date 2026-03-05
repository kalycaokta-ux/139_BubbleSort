#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen

void input() {       // procedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;    // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break    // keluar dari loop
        else (       // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; 
        )
    }
    cout << endl;
    cout << "============"
}     