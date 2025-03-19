#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan tinggi piramida: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Bagian angka menaik
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Bagian angka menurun
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
