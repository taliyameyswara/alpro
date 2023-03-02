/**
 * Tugas Alpro - Taliya Meyswara A11.2022.14163

 * Program Kalkulator
    {program kalkulator sederhana}tung
    {menggunakan operasi +,-,*,/,}
* KAMUS
    a,b : real
    op : char
    hasil : real

* ALGORITMA
    input(a,op,b)
    depend on (op)
    op = '+' :  output(a+b);
    op = '-' :  output(a-b);
    op = '*' :  output(a*b);
    op = '/' :  output(a/b);
*/

#include <iostream>
using namespace std;

int main(){

    float a,b,hasil;
    char op,tanya;

   do{
    cout << "Masukkan dua angka disertai operator[+,-,*,/]" << endl;
    cout << "Input: "; cin >> a >> op >> b;
    if (op == '+'){
        cout << a << " + " << b << " = " << a+b << endl;
    }
    else if (op == '-'){
        cout << a << " - " << b << " = " << a-b << endl;
    }
    else if (op == '*'){
        cout << a << " * " << b << " = " << a*b << endl;
    }
    else if (op == '/'){
        cout << a << " / " << b << " = " << a/b << endl;
    }
     cout << "Hitung lagi?[y/t] : " ; cin >> tanya; 
   }
    while(tanya=='y');
    
    
    return 0;
}
