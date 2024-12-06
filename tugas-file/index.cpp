#include <iostream>
#include <fstream>
using namespace std;

int main(){
    system("cls");
    
    string data;
    string text;
    ifstream file("C:/KaruniaRaharjo.txt");
    ofstream fileEdit("C:/KaruniaRaharjo.txt",ios::app);

    if (file.is_open() && fileEdit.is_open())
    {
        fileEdit << "Nama	: Karunia Raharjo" << endl << "Kelas	: Informatika A" << endl << "Alamat	: Batang" << endl << endl;
        while (getline(file, text))
        {
            cout << text << endl;
        }
        file.close();
    }
    else
    {
        cout << "File tidak ditemukan";
    }

    if (fileEdit.is_open())
    {
        cout << "ketik apa saja : ";
        getline(cin,data);
        fileEdit << data << endl;
        fileEdit.close();
    }
    else
    {
        cout << "File tidak ditemukan";
    }
}