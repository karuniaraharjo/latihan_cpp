#include <iostream>
using namespace std;

int main() {
    int jumlahSiswa, jumlahMapel;

    // Meminta input jumlah siswa dan jumlah mata pelajaran
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;
    cout << "Masukkan jumlah mata pelajaran: ";
    cin >> jumlahMapel;

    // Deklarasi array 2D untuk menyimpan nilai siswa
    int nilai[jumlahSiswa][jumlahMapel];

    // Input nilai siswa
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Nilai siswa " << i + 1 << ":" << endl;
        for (int j = 0; j < jumlahMapel; j++) {
            cout << "MatPel " << j + 1 << ": ";
            cin >> nilai[i][j];
        }
    }

    // Menghitung dan menampilkan rata-rata nilai per siswa
    cout << "\nRata-rata per siswa:" << endl;
    for (int i = 0; i < jumlahSiswa; i++) {
        double total = 0;
        for (int j = 0; j < jumlahMapel; j++) {
            total += nilai[i][j];
        }
        double rataRata = total / jumlahMapel;
        cout << "Siswa " << i + 1 << ": " << rataRata << endl;
    }

    return 0;
}
