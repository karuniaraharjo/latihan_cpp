#include <iostream>
using namespace std;

int main() {
  string status = "Y";

  while (status == "Y" || status == "y")
  {
    int nilai;

    cout << "Masukkan nilai ujian (0-100) : ";
    cin >> nilai;

    if (nilai >= 85 && nilai <=100)
    {
      cout << "Grade A";
    }
    else if (nilai >= 70 && nilai <=84)
    {
      cout << "Grade B";
    }
    else if (nilai >= 55 && nilai <=69)
    {
      cout << "Grade C";
    }
    else if (nilai >= 40 && nilai <=54)
    {
      cout << "Grade D";
    }
    else if (nilai >= 0 && nilai <=39)
    {
      cout << "Grade E";
    }
    else
    {
      cout << "Kesalahan input";
    }

    cout << "\nApakah anda ingin mengulang? (Y/N) : ";
    cin >> status;
  }
}