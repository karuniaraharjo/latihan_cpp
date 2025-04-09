// Kita memiliki data NIM mahasiswa yang sudah urut dalam array nim[].
// Kemudian dilakukan pencarian NIM mahasiswa dengan metode binary search.
#include <iostream>
using namespace std;

int main() {
    int nim[] = {60324001, 60324002, 60324003, 60324004, 60324005, 60324006, 60324007, 60324008, 60324009, 60324010, 60324011, 60324012, 60324013, 60324014, 60324015, 60324016, 60324017, 60324018, 60324019, 60324020, 60324021, 60324022, 60324023, 60324024, 60324025, 60324026, 60324027, 60324028, 60324029, 60324030, 60324031, 60324032, 60324033, 60324034, 60324035, 60324036, 60324037, 60324038, 60324039, 60324040, 60324041, 60324042, 60324043, 60324044, 60324045, 60324046, 60324047, 60324048, 60324049, 60324050, 60324051, 60324052, 60324053, 60324054, 60324055, 60324056, 60324057, 60324058, 60324059, 60324060, 60324061, 60324062, 60324063, 60324064, 60324065, 60324066, 60324067, 60324068, 60324069, 60324070, 60324071, 60324072, 60324073, 60324074, 60324075, 60324076, 60324077, 60324078, 60324079, 60324080, 60324081, 60324082, 60324083, 60324084, 60324085, 60324086, 60324087, 60324088, 60324089, 60324090, 60324091, 60324092, 60324093, 60324094};// nimay harus terurut
    int size = sizeof(nim)/sizeof(nim[0]);
    int target;

    cout << "=== Binary Search ===" << endl;
    cout << "Cari NIM mahasiswa : ";
    cin >> target;

    int low = 0;
    int high = size - 1;
    int loop = 0;

    while(low <= high) {
        loop++;
        int mid = low + (high - low)/2; // Mencegah overflow

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