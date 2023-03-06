/**
 * D2H - 2 Maret 2023 - Taliya Meyswara

main()
 * Program Durasi Jam
    {program hasil durasi jam dalam bentuk detik}
 * Kamus
    hasil <- interger
    JAw, JAk, MAw, MAk, DAw, DAk <- interger

    function durasi(jx <- int, jy <- int, mx <- int, my <- int, dx <- int, dy <- int) <- interger
        * Judul
            Menghitung durasi dari waktu awal sampai waktu akhir menggunakan parameter
        * Kamus lokal
            rumus <- interger
        * Deskripsi
            rumus <- ((jy*3600)-(jx*3600) + (my*3600)-(mx*3600) + (dy)-(dx))
            return rumus
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
    hasil <- durasi(JAw, JAk, MAw, MAk, DAw, DAk)
    output (hasil)
*/

//  Menggunakan fungsi dengan parameter
    #include <iostream>
    using namespace std;
    int hasil, JAw, JAk, MAw, MAk, DAw, DAk;

    int durasi(int jx, int jy, int mx, int my, int dx, int dy){
        int rumus;
        rumus = ((jy*3600)-(jx*3600) + (my*3600)-(mx*3600) + (dy)-(dx));
        return rumus;
    }

    int main(){
        cout << "Jam awal: " ; cin >> JAw;
        cout << "Jam akhir: " ; cin >> JAk;
        cout << "Menit awal: " ; cin >> MAw;
        cout << "Menit akhir: " ; cin >> MAk;
        cout << "Detik awal: " ; cin >> DAw;
        cout << "Detik akhir: " ; cin >> DAk;
        hasil = durasi(JAw, JAk, MAw, MAk, DAw, DAk);
        cout << "Hasil: " << hasil << endl;
    }


