#include <iostream>
using namespace std;

int main() {
    int jumlahLapis, jumlahBaris, jumlahKolom;

    // Meminta input jumlah lapisan, baris, dan kolom
    cout << "Masukkan jumlah lapis: ";
    cin >> jumlahLapis;
    cout << "Masukkan jumlah baris per lapis: ";
    cin >> jumlahBaris;
    cout << "Masukkan jumlah kolom per baris: ";
    cin >> jumlahKolom;

    // Deklarasi array 3D
    int array3D[jumlahLapis][jumlahBaris][jumlahKolom];

    // Input elemen array
    for (int l = 0; l < jumlahLapis; l++) {
        cout << "Lapis " << l + 1 << ":\n";
        for (int b = 0; b < jumlahBaris; b++) {
            for (int k = 0; k < jumlahKolom; k++) {
                cout << "Baris " << b + 1 << ", Kolom " << k + 1 << ": ";
                cin >> array3D[l][b][k];
            }
        }
    }

    // Menghitung dan menampilkan total nilai per lapisan
    cout << "\nTotal Lapisan:\n";
    for (int l = 0; l < jumlahLapis; l++) {
        int total = 0;
        for (int b = 0; b < jumlahBaris; b++) {
            for (int k = 0; k < jumlahKolom; k++) {
                total += array3D[l][b][k];
            }
        }
        cout << "Total Lapisan " << l + 1 << ": " << total << endl;
    }

    return 0;
}
