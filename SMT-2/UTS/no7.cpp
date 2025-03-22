// masukkan panjang, lebar, tinggi & tampilkan luas&volume
#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
float HitungLuas(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung volume dengan memanggil fungsi HitungLuas
float HitungVolume(float panjang, float lebar, float tinggi) {
    return HitungLuas(panjang, lebar) * tinggi;
}

int main() {
    float panjang, lebar, tinggi;

    // Input panjang, lebar, dan tinggi dari pengguna
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    // Menghitung luas dan volume
    float luas = HitungLuas(panjang, lebar);
    float volume = HitungVolume(panjang, lebar, tinggi);

    // Menampilkan hasil
    cout << "Luas: " << luas << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}
