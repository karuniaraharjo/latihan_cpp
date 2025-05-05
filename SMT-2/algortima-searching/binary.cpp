// Kita memiliki data NIM mahasiswa yang sudah urut dalam array nim[].
// Kemudian dilakukan pencarian NIM mahasiswa dengan metode binary search.
#include <iostream>
using namespace std;

int main() {
    int nim[] = {60324001, 60324002, 60324003, 60324004, 60324005, 60324006, 60324007, 60324008, 60324009, 60324010,};
    int size = sizeof(nim)/sizeof(nim[0]);
    int target;

    cout << "=== Binary Search ===" << endl;
    cout << "Cari NIM mahasiswa : ";
    cin >> target;

    int low = 0;
    int high = size - 1;

    while(low <= high) {
        int mid = low + (high - low)/2;

        if(nim[mid] == target) {
            cout << "\nNIM " << target << " ditemukan di index " << mid << endl;
            return 0;
        }
        else if(nim[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "NIM tidak ditemukan" << endl;
    return 1;
}