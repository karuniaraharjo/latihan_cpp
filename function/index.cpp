#include <iostream>
using namespace std;

// Buat fungsi hello()
void hello() { // function void tidak mengembalikan nilai
    // Menampilkan "Hello, Selamat Pagi!"
    cout << "Hello, Selamat Pagi!" << endl;
}

// Fungsi perkenalan() dengan parameter nama type string
void perkenalan(string nama) { // function void tidak mengembalikan nilai
    //Menampilkan "Hai, Perkenalkan nama saya (nama yang ada diparameter nama)"
    cout << "Hai, Perkenalkan nama saya " << nama << endl; 
}

// Fungsi pengurangan() menerima 2 parameter a, b dengan type int
int pengurangan(int a, int b) {
    // Mengembalikan nilai a dikurangi b
    return a - b;
}

// Fungsi pembagian() menerima 2 parameter a, b dengan type int
float pembagian(int a, int b) {
    // Mengembalikan nilai a dibagi b
    return a / b;
}

// Fungsi hari() menerima parameter a type int
string hari(int a) {
    // Mencocokkan a dengan hari
    switch (a)
    {
    case 1:
        // Mengembalikan nama hari dengan type string
        return "Senin";
        break;
    case 2:
        return "Selasa";
        break;
    case 3:
        return "Rabu";
        break;
    case 4:
        return "Kamis";
        break;
    case 5:
        return "Jumat";
        break;
    case 6:
        return "Sabtu";
        break;
    case 7:
        return "Minggu";
        break;
    default:
        // Mengembalikan "Hari tidak ada" jika angka yang dimasukkan bukan 1-7
        return "Hari tidak ada";
        break;
    }
}

int main() {
    // Panggil Function hello
    hello();

    // Panggil Function perkenalan dengan parameter "Karunia Raharjo"
    perkenalan("Karunia Raharjo");

    // Panggil Function pengurangan dengan parameter 10 dan 6
    cout << "Hasil pengurangan dari 10 dan 6 adalah " << pengurangan(10, 6) << endl;

    // Panggil Function pembagian dengan parameter 10 dan 5
    cout << "Hasil pembagian dari 10 dan 5 adalah " << pembagian(10, 5) << endl;

    // Panggil Function hari dengan parameter 4
    cout << "Hari ke 4 adalah hari " << hari(4) << endl;
    
    return 0;
}
