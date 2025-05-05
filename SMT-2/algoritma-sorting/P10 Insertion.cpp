#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];  // Simpan nilai elemen saat ini
        int j = i - 1;         // Mulai periksa dari elemen sebelumnya

        // Geser elemen yang lebih besar dari 'current' ke kanan
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];  // Geser elemen ke kanan
            j--;
        }
        // Tempatkan 'current' di posisi yang tepat
        arr[j + 1] = current;
    }
}

// Contoh penggunaan dengan array spesifik
int main() {
    int data[] = {5, 3, 8, 4, 2};
    int size = sizeof(data) / sizeof(data[0]);
    
    cout << "Array sebelum diurutkan: ";
    printArray(data, size);
    
    insertionSort(data, size);
    
    cout << "Array setelah diurutkan: ";
    printArray(data, size);
    
    return 0;
}