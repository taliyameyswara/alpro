/**
 * D2H - 15:20. 2 Maret 2023 - Taliya Meyswara
 
 * Program Menghitung Score
    {program menghitung nilai akhir}
 * Kamus
    tgs,mid,uas <- real {data nilai}
    ptgs,pmid,puas <- real {presentase nilai}
    hasil <- real 

    function input()
        * Judul
            Untuk menginput data 3 nilai yaitu nilai tugas, nilai mid, nilai uas.
        * Kamus 
            -
        * Deskripsi
            output("Input nilai tugas: ")
            input(tgs)
            output("Input nilai mid: ")
            input(mid)
            output("Input nilai uas: ")
            input(uas)

    function hitung(tgsx <- real, midx <- real, uasx <- real)
        * Judul
            Untuk menghitung Hasil Nilai Akhir
        * Kamus
            -
        * Deskripsi
            ptgs <- 0.4;
            pmid <- 0.3;
            puas <- 0.3;
            hasil <- ((tgsx*ptgs)+(midx*pmid)+(uasx*puas))
            return hasil;

    function tampil()
     * Judul
            Untuk menampilkan Hasil Nilai Akhir
        * Kamus
            -
        * Deskripsi
            output("Nilai akhir:", hitung(tgs,mid,uas))
 * Deskripsi
    input()
    hitung()
    tampil()
*/

#include <iostream>
using namespace std;

float tgs,uts,uas;
float ptgs,pmid,puas;
float hasil,na;

void input(){
    cout << "Input nilai tugas: " ; cin >> tgs;
    cout << "Input nilai uts: " ; cin >> uts;
    cout << "Input nilai uas: " ; cin >> uas;
}

int hitung(float tgsx, float midx, float uasx){
    ptgs = 0.4;
    pmid = 0.3;
    puas = 0.3;
    hasil = (tgs*ptgs)+(uts*pmid)+(uas*puas);
    return hasil;
}

void huruf(){
    na = hitung(tgs,uts,uas);
    if (na>= 85 && na <= 100){
        cout << 'A' << endl;
    }
    else if (na >= 80 && na < 85){
        cout << 'AB' << endl;
    }
    else if (na >= 70 && na < 80){
        cout << 'B' << endl;
    }
    else if (na >= 65 && na < 70){
        cout << 'BC' << endl;
    }
    else if (na >= 60 && na < 65){
        cout << 'C' << endl;
    }
    else if (na >= 50 && na < 60){
        cout << 'D' << endl;
    }
    else{
        cout << 'E' << endl;
    }
}

void tampil(){
    cout << "Nilai akhir: " << hitung(tgs,uts,uas) << endl;
}

int main(){
    input();
    tampil();
    cout << "Huruf: " ;
    huruf();
}

