#include <iostream>
#include <string>
using namespace std;

bool validasi(string username, string password) {
    string correctUsername = "user123";
    string correctPassword = "password";

    if (username == correctUsername && password == correctPassword) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string username, password;

    cout << "Masukkan Username: ";
    cin >> username;
    cout << "Masukkan Password: ";
    cin >> password;

    if (validasi(username, password)) {
        cout << "Login berhasil. Selamat datang, " << username << "!" << endl;
    } else {
        cout << "Login gagal. Username atau password salah." << endl;
    }

    return 0;
}
