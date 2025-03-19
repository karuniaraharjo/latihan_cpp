#include <iostream>
using namespace std;

int main() {
  system("cls");
  char kode = 'a';

  cout << "Masukkan Pilihan Prodi (A/B/C) : ";
  cin >> kode;

  switch (kode)
  {
  case 'A':
    cout << "Informatika";
    break;
  case 'B':
    cout << "Bisnis Digital";
    break;
  case 'C':
    cout << "Sains Data";
    break;
  default:
    cout << "Invalid kode";
    //break;
  }
}