#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    // Meminta pengguna memasukkan ukuran matriks
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int matriksA[baris][kolom], matriksB[baris][kolom], hasil[baris][kolom];

    // Input elemen matriks A
    cout << "\nMasukkan elemen matriks A (" << baris << "x" << kolom << "):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriksA[i][j];
        }
    }

    // Input elemen matriks B
    cout << "\nMasukkan elemen matriks B (" << baris << "x" << kolom << "):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriksB[i][j];
        }
    }

    // Menjumlahkan matriks A dan B
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    // Menampilkan matriks A
    cout << "\nMatriks A:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }

    // Menampilkan matriks B
    cout << "\nMatriks B:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }

    // Menampilkan hasil penjumlahan
    cout << "\nHasil penjumlahan:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
