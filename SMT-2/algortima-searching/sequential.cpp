// Kita memiliki data mahasiswa yang disimpan dalam array mhs[].
// Kemudian dilakukan pencarian mahasiswa berdasarkan nama dengan metode sequential search.
#include <iostream>
using namespace std;

int main() {
    string mhs[] = {"Adhysta", "Rangga", "Azka", "Arun", "Inggil", "Hamdi", "Fauzi", "Ali"};
    int size = sizeof(mhs)/sizeof(mhs[0]);
    string target;

    cout << "=== Sequential Search ===" << endl;
    cout << "Cari nama mahasiswa : ";
    cin >> target;

    for(int i = 0; i < size; i++) {
        if(mhs[i] == target) {
            cout << "\nMahasiswa " << target << " ditemukan di index " << i << endl;
            return 0;
        }
    }
    cout << "Mahasiswa tidak ditemukan" << endl;
    return 1;
}