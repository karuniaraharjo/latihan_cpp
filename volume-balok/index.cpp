#include <iostream>
using namespace std;

int main() {
  int panjang, lebar, tinggi, volume;
  cout << "Hello Arun! \n";
  cout << "Masukkan Panjang Balok : ";
  cin >> panjang;
  cout << "Masukkan Lebar Balok : ";
  cin >> lebar;
  cout << "Masukkan Tinggi Balok : ";
  cin >> tinggi;
  volume = panjang * lebar * tinggi;
  cout << "Volume Balok adalah = " << volume;
  return 0;
}