#include <iostream>
using namespace std;

int main(){
    system("CLS");
    string nama, status;
    int nilai;
    
    cout<<"Masukkan Nama Kamu : ";
    cin>>nama;
    cout<<"Masukkan Nilai Kamu : ";
    cin>>nilai;

    if (nilai > 100)
    {
        status = "Terlalu Besar";
    }
    else if (nilai > 90)
    {
        status = "Lulus";
    }
    else if (nilai > 80)
    {
        status = "Lulus";
    }
    else if (nilai > 70)
    {
        status = "Lulus";
    }
    else if (nilai > 60)
    {
        status = "Tidak Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    
    cout<<"Hai "<<nama<<endl;
    cout<<"Nilai Kamu "<<nilai<<endl;
    cout<<"Kamu Dinyatakan "<<status;

    return 0;
}