#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan ukuran tabel: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << i * j << "\t"; // Menggunakan tab agar tabel rapi
        }
        cout << endl;
    }

    return 0;
}
