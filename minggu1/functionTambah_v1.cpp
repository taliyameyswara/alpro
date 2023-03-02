/**
 Program Menghitung 2 Bilangan
 {program menjumlahkan dua bilangan menggunakan fungsi biasa}

 Kamus
    a <- interger
    b <- real
    hasil <- real

    function inputan()
    {untuk menginput data}
    input(a)
    input (b)

    function hitung()
    {untuk menghitung data}
    hasil <- a+b

    function tampil()
    {untuk menampilkan hasil}
    output("Hasil : ", hasil)
Algoritma
    inputan()
    hitung()
    tampil()
*/

#include <iostream>
using namespace std;

int a;
float b,hasil;

void inputan(){
    cout << "Input a: " ; cin >> a;
    cout << "Input a: " ; cin >> b;
}

void hitung(){
    hasil = a + b;
}

void tampil(){
    cout << "Hasil : " <<hasil << endl;
}

int main(){
    inputan();
    hitung();
    tampil();
}