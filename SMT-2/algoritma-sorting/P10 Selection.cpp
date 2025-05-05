#include <iostream>
using namespace std;

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Cari indeks nilai minimum di bagian belum terurut
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update indeks nilai minimum
            }
        }
        // Tukar elemen minimum dengan elemen pertama di bagian belum terurut
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Contoh penggunaan dengan array spesifik
int main() {
    int data[] = {5, 3, 8, 4, 2};
    int size = sizeof(data) / sizeof(data[0]);
    
    cout << "Array sebelum diurutkan: ";
    printArray(data, size);
    
    selectionSort(data, size);
    
    cout << "Array setelah diurutkan: ";
    printArray(data, size);
    
    return 0;
}