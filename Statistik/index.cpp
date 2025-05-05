#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int TOTAL_NUMBERS = 1000000; // Jumlah data yang akan di-generate
    const string FILE_NAME = "angka_acak.csv"; // Nama file output
    
    ofstream file(FILE_NAME); // Membuka file untuk ditulis

    if (!file.is_open()) {
        cerr << "Gagal membuka file!" << endl;
        return 1;
    }

    srand(time(0)); // Seed untuk angka acak

    file << "Angka\n"; // Header untuk file CSV

    for (int i = 0; i < TOTAL_NUMBERS; i++) {
        int randomNumber = rand(); // Menghasilkan angka acak
        file << randomNumber << "\n"; // Menulis ke file CSV
    }

    file.close(); // Menutup file

    cout << "File " << FILE_NAME << " berhasil dibuat dengan " << TOTAL_NUMBERS << " angka acak." << endl;
    
    return 0;
}
