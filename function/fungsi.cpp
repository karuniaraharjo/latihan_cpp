#include<iostream>
using namespace std;

// Create a function
void iniFungsi() {
  cout << "fungsi di eksekusi";
}

// Create a function
void iniFungsikedua() {
  cout << "fungsi kedua di eksekusi";
}

void Salam(string nama){ //fungsi dengan 1 parameter string
    cout << "Halo "<< nama <<", Selamat Datang !!!";
} 

//int perkalian() menunjukkan function memiliki nilai kembalian berupa nilai integer
int perkalian(int angka1, int angka2){ //fungsi dengan 2 parameter int
   int hasil = angka1*angka2; 
   return hasil;  // memberikan nilai kembalian/return

} 

int penjumlahan(int angka1, int angka2){
   int hasil = angka1+angka2; 
   return hasil;
} 

int main() {
  cout << "=== Pemanggilan fungsi pada C++ ===="<< endl;
    iniFungsi(); // call the function
  cout << endl;
    iniFungsikedua();
  cout << endl;
    Salam("Rohmad Abidin");
  cout << endl;
    cout << "Hasil perkalian angka "<< perkalian(5,10); 
  cout << endl;
  int a = 5; 
  int b = 10;
  // hasil return dapat digunakan untuk operasi selanjutnya
  float hasil;
        hasil = (penjumlahan(a,b)/2.0);
    cout << "Hasil dari "<< a << " ditambah " << b << " dibagi 2 adalah "<< hasil ; 

  return 0;
}

/* 
Tugas 
1. buatlah materi mengenai fungsi/function
    - apa itu function
    - apa itu parameter
    - apa itu return
    - bagaimana deklarasi dan penerapannya function dengan return maupun tanpa return (beri keterangan codenya) buat minimal 5 variasi function
  Tugas no 1 dibuat menggunakan Ms Word.  

2. Buatlah contoh projek untuk login (username, password) dengan menggunakan function untuk validasinya.
   Tugas no 2 dikumpulkan dengan format NamaAnda_login.cpp
   
3. Upload hasil pengerjaan (1&2) ke alamat https://forms.gle/PjnrLxetPdnvjERU9 
   Kedua file dijadikan 1 folder dan dikirim dalam format .zip/.rar (NamaAnda_Kelas A/B.Zip)
*/