// input tinggi berlian
#include <iostream>
using namespace std;

int main() {
    //Bagian 1
    int n; // variabel -> nampung input
    cout << "Masukkan tinggi berlian (ganjil): "; // perintah
    cin >> n; // input

    // Validasi apakah N ganjil
    if (n % 2 == 0){ // jika yang dinput -> modulus 4 % 2 == 0
        n++;// n+1 -> n = 5
    }

    // menentukan baris tengah
    int mid = n / 2;// 2

    // Mencetak bagian atas berlian
    for (int i = 0; i <= mid; i++) { // 0 - 1 - 2 

        int jmlSps = mid - i; // 2 1 0
        for (int j = 0; j < jmlSps; j++){
            cout << " "; // Cetak spasi
        }

        int jmlBnt = 2 * i + 1; // 1 3 5
        for (int j = 0; j < jmlBnt; j++){
            cout << "*"; // Cetak bintang
        }

        cout << endl;
    }

    // Mencetak bagian bawah berlian
    for (int i = mid - 1; i >= 0; i--) { // 

        int jmlSps = mid - i; // 1 0
        for (int j = 0; j < jmlSps; j++)
            cout << " "; // Cetak spasi

        int jmlBnt = 2 * i + 1; // 3 1
        for (int j = 0; j < jmlBnt; j++)
            cout << "*"; // Cetak bintang

        cout << endl;
    }

    return 0;
}
