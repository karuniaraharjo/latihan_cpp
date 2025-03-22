//tampilkan digit pertama
#include <iostream>

using namespace std;

int main() {
    // Loop untuk setiap digit
    for (int d1 = 0; d1 <= 9; d1+=2) { 
        for (int d2 = 1; d2 <= 9; d2 += 2) { 
            for (int d3 = 1; d3 <= 9; d3++) { 
                if (d3 == 0 || d3 == 5) {continue;}
                for (int d4 = 0; d4 <= 9; d4+=3) { 
                    cout << d1 << d2 << d3 << d4 << endl; //  0190  0123 0126 0199
                }
            }
        }
    }

    return 0;
}
