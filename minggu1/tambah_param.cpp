/**
 Program Menghitung 2 Bilangan
 {program menjumlahkan dua bilangan menggunakan fungsi biasa}

 Kamus
    m <- interger
    n <- real
    hasil <- real

    function hsl(m : interger, n : real) 
    {untuk menjumlahkan dua bilangan yaitu m dan n}
    hsl <- m+n
    return hsl

Algoritma
    input m
    input n
    output hsl(m,n)
*/

#include <iostream>
using namespace std;

int hsl(int m, float n){
    float hsl = m+n;
    return hsl;
}

int main(){
    int m;
    float n;
    cout << "Input m: " ; cin >> m;
    cout << "Input n: " ; cin >> n;
    cout << "Hasil: " <<  hsl(m,n) << endl;
}