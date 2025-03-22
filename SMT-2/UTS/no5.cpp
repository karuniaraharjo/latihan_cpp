//masukkan ukuran tabel & cetak baris pertama
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan ukuran tabel: ";
    cin >> N;

    for (int i = 1; i <= N; i++) { // cetak baris
        for (int j = 1; j <= N; j++) { // cetak kolom
            cout << i * j << "\t"; // cetak perkalian baris * kolom
        }
        cout << endl;
    }

    return 0;
}
