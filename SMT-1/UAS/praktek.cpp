#include <iostream>
using namespace std;

int main(){
    system("cls");

    string nama;
    int belanja[5];
    int total; 

    cout << "Masukkan nama pelanggan : ";
    getline(cin,nama);

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan harga barang ke-" << i+1 << " : ";
        cin >> belanja[i];
        total += belanja[i]; // total = total + belanja[i]
    }
    
    cout << endl << "=== Struk Pembayaran ===" << endl;
    cout << "Nama Pelanggan : " << nama << endl;
    cout << "Total belanja  : " << total << endl << endl;
}