#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    bool valid = false;

    while (!valid) {
        cout << "Masukkan tanggal (dd mm yyyy): ";
        cin >> day >> month >> year;

        if (year < 1900 || year > 2024) {
            cout << "Tahun tidak valid!" << endl;
            continue;
        }

        if (month < 1 || month > 12) {
            cout << "Bulan tidak valid!" << endl;
            continue;
        }

        int maxDays;
        if (month == 2) {  
            // Februari (cek tahun kabisat)
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                maxDays = 29;  
            else
                maxDays = 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;  
        } else {
            maxDays = 31;  
        }

        if (day < 1 || day > maxDays) {
            cout << "Hari tidak valid!" << endl;
        } else {
            valid = true;
        }
    }

    cout << "Tanggal valid: " << day << "/" << month << "/" << year << endl;
    return 0;
}
