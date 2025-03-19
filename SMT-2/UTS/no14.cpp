#include <iostream>
#include <iomanip> // Untuk setprecision
using namespace std;

int main() {
    int baris, kolom;
    
    // Memasukkan ukuran matriks
    cout << "Masukkan jumlah baris (m): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom (n): ";
    cin >> kolom;

    int matriks[baris][kolom];
    float total = 0;  // Menggunakan float untuk total

    // Input elemen matriks
    cout << "\nMasukkan elemen matriks " << baris << "x" << kolom << ":\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i+1 << "][" << j+1 << "]: ";
            cin >> matriks[i][j];
            total += matriks[i][j];  // Menjumlahkan elemen
        }
    }

    // Menghitung rata-rata
    float rata_rata = total / (baris * kolom);

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nRata-rata: " << rata_rata << endl;

    return 0;
}
