#include <iostream>
using namespace std;

int main() {
  system("cls");

  //Tugas 1
  string mahasiswa[] = {"Aji","Candra","Inggil"};
  cout << "Mahasiswa Terbaik\n";
  for (int i = 0; i < sizeof(mahasiswa) / sizeof(*mahasiswa); i++)
  {
    cout << i+1 << "." << mahasiswa[i] << endl;
  }


  //Tugas 2
  string huruf[2][4] = {
    {"A","B","C","D"},
    {"E","F","G","H"},
  };
  //huruf[0][0] = "O";
  cout << endl << huruf[0][1] << huruf[0][0] << huruf[0][2] << huruf[0][0]; 
}