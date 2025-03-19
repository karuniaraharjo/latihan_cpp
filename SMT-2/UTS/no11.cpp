#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int panjangArray;

    // Meminta pengguna memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> panjangArray;

    int array1D[panjangArray];

    // Memasukkan elemen array
    for (int i = 0; i < panjangArray; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> array1D[i];
    }

    // Inisialisasi nilai maksimum dan minimum
    int maksimum = array1D[0];
    int minimum = array1D[0];
    float total = 0;

    // Menghitung nilai maksimum, minimum, dan total
    for (int i = 0; i < panjangArray; i++) {
        if (array1D[i] > maksimum)
            maksimum = array1D[i];

        if (array1D[i] < minimum)
            minimum = array1D[i];

        total += array1D[i];
    }

    // Menghitung rata-rata
    float rataRata = total / panjangArray;

    // Menampilkan hasil dengan format 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\nNilai maksimum: " << maksimum << endl;
    cout << "Nilai minimum: " << minimum << endl;
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}
