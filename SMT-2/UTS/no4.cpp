//masukkan tanggal & tampilkan
#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    bool tidak_valid = true;

    do {
        // perintah untuk memasukkan tanggal
        cout << "Masukkan tanggal (dd mm yyyy): ";
        cin >> day >> month >> year;

        // Cek tahun
        if (year < 1900 || year > 2024) {
            cout << "Tahun tidak valid!" << endl;
            continue;
        }

        // cek bulan
        if (month < 1 || month > 12) {
            cout << "Bulan tidak valid!" << endl;
            continue;
        }

        // hitung jumlah hari dalam bulan
        int maxDays;
        if (month == 2) { // Februari (cek tahun kabisat)
            if (year % 4 == 0)
                maxDays = 29;  
            else
                maxDays = 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else {
            maxDays = 31;
        }

        // cek hari
        if (day < 1 || day > maxDays) {
            cout << "Hari tidak valid!" << endl;
        } else {
            tidak_valid = false;
        }
    } while (tidak_valid); // ulangi jika tanggal tidak valid

    // jika tanggal valid tampilkan ini & program berhenti
    cout << "Tanggal valid: " << day << "/" << month << "/" << year << endl;
    return 0;
}
