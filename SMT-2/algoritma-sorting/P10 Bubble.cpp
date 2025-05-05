#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi Bubble Sort
void bubbleSort(int arr[], int size) { // {5, 3, 8, 4, 2}, 20/4 = 5
    // Setiap iterasi akan menggeser elemen terbesar ke posisi terakhir
    for (int i = 0; i < size - 1; i++) { // 0 -> 4
        // Bandingkan elemen berdekatan dan tukar jika tidak urut
        for (int j = 0; j < size - i - 1; j++) { // 0 -> 5-i
            if (arr[j] > arr[j + 1]) { // Proses swap (penukaran)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Contoh penggunaan
int main() {
    int data[] = {5, 3, 8, 4, 2}; 
    int size = sizeof(data) / sizeof(data[0]);
    
    cout << "Array sebelum diurutkan: ";
    printArray(data, size);
    
    bubbleSort(data, size);
    
    cout << "Array setelah diurutkan: ";
    printArray(data, size);
    
    return 0;
}