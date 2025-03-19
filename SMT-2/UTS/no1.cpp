#include <iostream>

using namespace std;

int main() {
    int n;

    // Meminta pengguna memasukkan angka ganjil
    cout << "Masukkan tinggi berlian (ganjil): ";
    cin >> n;

    // Validasi apakah N ganjil
    if (n % 2 == 0) {
        n++;
    }

    int mid = n / 2; // Posisi tengah berlian

    // Mencetak bagian atas berlian
    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++)
            cout << " "; // Cetak spasi
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*"; // Cetak bintang
        cout << endl;
    }

    // Mencetak bagian bawah berlian
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++)
            cout << " "; // Cetak spasi
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*"; // Cetak bintang
        cout << endl;
    }

    return 0;
}
