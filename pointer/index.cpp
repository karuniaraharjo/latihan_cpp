#include <iostream>
using namespace std;

int main(){
    system("cls");
    string nama = "Arun";
    string* ptr = &nama;

    cout << nama << endl;
    cout << &nama << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "-------" << endl;

    nama = "Karunia";
    
    cout << nama << endl;
    cout << &nama << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}   