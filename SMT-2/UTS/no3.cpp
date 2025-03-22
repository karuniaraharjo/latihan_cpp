//masukkan tinggi segitiga
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan tinggi segitiga: ";
    cin >> N;

    for (int i = 1; i <= N; i++) { // looping jumlah baris
        int a = 1, b = 1, next;
        cout << a << " ";  // Cetak angka pertama = 1
        
        for (int j = 1; j < i; j++) { // - 1 2 3 4
            cout << b << " ";  // 

            next = a + b;  // Hitung angka Fibonacci berikutnya
            a = b; 
            b = next;
        }

        cout << endl;  // Pindah ke baris berikutnya
    }

    return 0;
}
