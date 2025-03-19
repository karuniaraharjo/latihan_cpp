#include <iostream>
using namespace std;

int main() {
    int barisA, kolomA, barisB, kolomB;

    // Memasukkan ukuran matriks A
    cout << "Masukkan baris matriks A: ";
    cin >> barisA;
    cout << "Masukkan kolom matriks A: ";
    cin >> kolomA;

    // Memasukkan ukuran matriks B
    cout << "Masukkan baris matriks B: ";
    cin >> barisB;
    cout << "Masukkan kolom matriks B: ";
    cin >> kolomB;

    // Validasi perkalian matriks
    if (kolomA != barisB) {
        cout << "Error: Ukuran matriks tidak valid untuk perkalian!\n";
        return 1; // Keluar dari program
    }

    int A[barisA][kolomA], B[barisB][kolomB], C[barisA][kolomB];

    // Input elemen matriks A
    cout << "\nMasukkan elemen matriks A (" << barisA << "x" << kolomA << "):\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> A[i][j];
        }
    }

    // Input elemen matriks B
    cout << "\nMasukkan elemen matriks B (" << barisB << "x" << kolomB << "):\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> B[i][j];
        }
    }

    // Inisialisasi hasil matriks C dengan 0
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            C[i][j] = 0;
        }
    }

    // Perkalian matriks
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            for (int k = 0; k < kolomA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan matriks A
    cout << "\nTampil matriks A (" << barisA << "x" << kolomA << "):\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    // Menampilkan matriks B
    cout << "\nTampil matriks B (" << barisB << "x" << kolomB << "):\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    // Menampilkan hasil perkalian matriks
    cout << "\nHasil perkalian:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
