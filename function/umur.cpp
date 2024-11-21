#include <iostream>
using namespace std;

int tahunskrg(){
    time_t t = time(nullptr);
    tm *const pTInfo = localtime(&t);
  
    int hasil= 1900 + pTInfo->tm_year;
    return hasil;
}

int umur(int tahun){
    return tahunskrg()-tahun;
}

int main(){
    system("cls");
    int tahun_lahir;
    cout << "Masukkan tahun lahir : ";
    cin >> tahun_lahir;
    cout << "Umur kamu pada tahun "<< tahunskrg() << " adalah " << umur(tahun_lahir) << " Tahun";
    return 0;
}