#include <iostream>
using namespace std;

int main() {
  system("cls");
  int angka1, angka2;
  char operasi;
  
  cout << "Masukkan operator : ";
  cin >> operasi;
  cout << "Masukkan angka1 : ";
  cin >> angka1;
  cout << "Masukkan angka2 : ";
  cin >> angka2;

  switch (operasi)
  {
  case '+':
    cout << "Hasil " << angka1 << " + " << angka2 << " = " << angka1+angka2;
    break;
  case '-':
    cout << "Hasil " << angka1 << " - " << angka2 << " = " << angka1-angka2;
    break;
  case '*':
    cout << "Hasil " << angka1 << " * " << angka2 << " = " << angka1*angka2;
    break;
    case '/':
    cout << "Hasil " << angka1 << " / " << angka2 << " = " << angka1/angka2;
    break;
  default:
    cout << "Invalid operator";
    //break;
  }
}