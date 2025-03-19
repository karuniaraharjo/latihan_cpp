#include <iostream>
using namespace std;

int main() {
  system("cls");
  int n;

  cout << "masukkan tinggi berlian (ganjil) : ";
  cin >> n; // 7

  if (n % 2 == 0)
  {
    n+=1;
  }

  int mid = n/2; // 3
  
  for (int i = 0; i <= mid; i++)
  {
    for (int spasi = 0; spasi < (mid - i); spasi++)
    {
        cout << " ";
    }
    for (int bintang = 0; bintang < (2*i + 1); bintang++)
    {
        cout << "*";
    }
    cout << endl;
  }

  for (int i = mid - 1; i >= 0; i--) // 2-1-0
  {
    for (int spasi = 0; spasi < (mid - i); spasi++) // 3 - i = 1-2-3
    {
        cout << " ";
    }
    for (int bintang = 0; bintang < (2*i + 1); bintang++)
    {
        cout << "*";
    }
    cout << endl;
  }
}