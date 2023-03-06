/**
 * D2H - 2 Maret 2023 - Taliya Meyswara
 
 main()
 * Program Durasi Jam
    {program hasil durasi jam dalam bentuk detik}
 * Kamus
    JAw, JAk, MAw, MAk, DAw, DAk <- interger
    hasil <- interger

     function input()
        * Judul
            Menginput jam, menit, detik awal dan akhir
        * Kamus Lokal
            -
        * Deskripsi
            output("Jam awal: " )
            input(JAw)
            output("Jam akhir: " )
            input(JAk)
            output("Menit awal: " )
            input(MAw)
            output("Menit akhir: " )
            input(MAk)
            output("Detik awal: " )
            input(DAw)
            output("Detik akhir: " )
            input(DAk)

     function durasi()
        * Judul
            Menghitung durasi dari waktu awal sampai waktu akhir
        * Kamus Lokal
            -
        * Deskripsi
            rumus <- ((JAk*3600)-(JAw*3600) + (MAk*3600)-(MAw*3600) + (DAk)-(DAw));

     function tampil()
        * Judul
            Menampilkan hasil perhitungan
        * Kamus Lokal
            -
        * Desakripsi 
            output ("Hasil: ", hasil)
            
 * Deskripsi
    input()
    durasi()
    tampil()
*/

#include <iostream>
using namespace std;

int JAw, JAk, MAw, MAk, DAw, DAk;
int hasil;

// void -> type yg tdk membutuhkan return/utk fungsi yg tdk berparameter

void input(){
    cout << "Jam awal: " ; cin >> JAw;
    cout << "Jam akhir: " ; cin >> JAk;
    cout << "Menit awal: " ; cin >> MAw;
    cout << "Menit akhir: " ; cin >> MAk;
    cout << "Detik awal: " ; cin >> DAw;
    cout << "Detik akhir: " ; cin >> DAk;
}

void rumus(){
    hasil = ((JAk*3600)-(JAw*3600) + (MAk*3600)-(MAw*3600) + (DAk)-(DAw));
}

void tampil(){
    cout << "Hasil: " << hasil << endl;
}


int main(){
    input();
    rumus();
    tampil();
}