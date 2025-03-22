//masukkan tinggi segitiga
#include <iostream>
using namespace std;

// Prosedur untuk menampilkan pola segitiga
void PolaSegitiga(int n) {
    for (int i = 1; i <= n; i++) { // Loop baris
        for (int j = 1; j <= i; j++) { // Loop kolom
            cout << "*";
        }
        cout << endl; // Pindah ke baris baru
    }
}

int main() {
    int tinggi;

    // Input tinggi segitiga
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Memanggil prosedur PolaSegitiga
    PolaSegitiga(tinggi);

    return 0;
}
