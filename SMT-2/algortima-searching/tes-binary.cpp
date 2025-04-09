#include <iostream>
#include <string>
using namespace std;

// Fungsi binary search
int binarySearch(string nim[], int size, string target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nim[mid] == target) {
            return mid; // Ditemukan
        } else if (nim[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Tidak ditemukan
}

int main() {
    // Array NIM mahasiswa (sudah terurut)
    string nimList[] = {"230101", "230102", "230103", "230104", "230105"};
    int jumlahMahasiswa = sizeof(nimList) / sizeof(nimList[0]);

    string nimInput;
    cout << "Masukkan NIM untuk presensi: ";
    cin >> nimInput;

    int hasil = binarySearch(nimList, jumlahMahasiswa, nimInput);

    if (hasil != -1) {
        cout << "Presensi berhasil! NIM ditemukan di indeks ke-" << hasil << "." << endl;
    } else {
        cout << "NIM tidak ditemukan. Pastikan NIM terdaftar!" << endl;
    }

    return 0;
}