#include <iostream>
using namespace std;

int main(){
    struct buku
    {
        string judul;
        int halaman;
        string penulis;
    };
    
    buku buku[3];
    buku[0].judul = "Kalkulus";
    buku[0].halaman = 100;
    buku[0].penulis = "Arun";

    buku[1].judul = "Dasar Pemrograman";
    buku[1].halaman = 150;
    buku[1].penulis = "Aji";

    buku[2].judul = "Algoritma";
    buku[2].halaman = 200;
    buku[2].penulis = "Surya";

    for (int i = 0; i < 3; i++)
    {
        cout << "Judul Buku : " << buku[i].judul << endl;
        cout << "Jumlah Halaman : " << buku[i].halaman << endl;
        cout << "Penulis : " << buku[i].penulis << endl << endl;
    }
}