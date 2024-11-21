#include <iostream>
using namespace std;

int umur(int tahun, int thnsekarang){
    return 2024-tahun;
}

int main(){
    system("cls");
    int tahun_lahir,thnsekarang;
    cout << "Masukkan tahun lahir : ";
    cin >> tahun_lahir;
    cout << "Masukkan tahun sekarang : ";
    cin >> thnsekarang;
    cout << "Umur kamu pada tahun "<< thnsekarang << " adalah " << umur(tahun_lahir,thnsekarang) << " Tahun";
    return 0;
}