#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan tinggi segitiga: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int a = 1, b = 1, next;
        cout << a << " ";  // Cetak angka pertama
        
        for (int j = 1; j < i; j++) {
            cout << b << " ";  // Cetak angka kedua dan seterusnya
            next = a + b;  // Hitung angka Fibonacci berikutnya
            a = b;
            b = next;
        }
        cout << endl;  // Pindah ke baris berikutnya
    }

    return 0;
}
