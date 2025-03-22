//input jumlah baris & kolom - deklarasi array
#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    // Meminta pengguna memasukkan ukuran matriks
    cout << "Masukkan jumlah baris (m): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom (n): ";
    cin >> kolom;

    int matriks[baris][kolom];

    // Input elemen matriks
    cout << "\nMasukkan elemen matriks " << baris << "x" << kolom << ":\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Inisialisasi nilai maksimum dan minimum dengan elemen pertama matriks
    int maks = matriks[0][0];
    int min = matriks[0][0];

    // Mencari nilai maksimum dan minimum dalam matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (matriks[i][j] > maks) {
                maks = matriks[i][j];
            }
            if (matriks[i][j] < min) {
                min = matriks[i][j];
            }
        }
    }

    // Menampilkan hasil
    cout << "\nNilai maksimum: " << maks << endl;
    cout << "Nilai minimum: " << min << endl;

    return 0;
}
