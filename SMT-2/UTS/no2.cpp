#include <iostream>

using namespace std;

int main() {
    // Loop untuk setiap digit
    for (int d1 = 0; d1 <= 9; d1 += 2) { // Digit pertama harus genap (0, 2, 4, 6, 8)
        for (int d2 = 1; d2 <= 9; d2 += 2) { // Digit kedua harus ganjil (1, 3, 5, 7, 9)
            for (int d3 = 1; d3 <= 9; d3++) { // Digit ketiga bukan 0 atau 5
                if (d3 == 0 || d3 == 5) continue; 
                for (int d4 = 0; d4 <= 9; d4++) { // Digit keempat adalah kelipatan 3
                    if (d4 % 3 == 0) {
                        cout << d1 << d2 << d3 << d4 << endl;
                    }
                }
            }
        }
    }

    return 0;
}
