#include <iostream>
using namespace std;

int main(){
    system("CLS");
    char produk1[20]="Sari Roti", produk2[10]="Susu", produk3[10]="Seres";
    int harga1=5000, harga2=3000, harga3=3000;
    int pajak = (harga1+harga2+harga3) * 11/100;
    int total = (harga1+harga2+harga3) + pajak;

    printf("Nama Produk \tHarga \n");
    printf("-----------------------\n");
    printf("%s \t %d \n",produk1,harga1);
    printf("%s \t \t %d \n",produk2,harga2);
    printf("%s \t \t %d \n",produk3,harga3);
    printf("-----------------------\n");
    printf("Pajak(11%) \t %d \n",pajak);
    printf("-----------------------\n");
    printf("Total \t \t %d",total);
}