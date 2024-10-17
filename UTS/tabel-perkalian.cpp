#include <iostream>
using namespace std;

int main() {
  system("cls");

  for (int i = 0; i <=10; i++)
  {
    if (i == 0)
    {
      cout << "\t";
    }
    else
    {
     cout << i << "\t"; 
    }
  }
  cout << "\n\n";
  
  for (int i = 1; i <= 10; i++)
  {
    cout << i << "\t";
    for (int j = 1; j <= 10; j++)
    {
      cout << i * j << "\t";
    }
    cout << endl;
  }
}