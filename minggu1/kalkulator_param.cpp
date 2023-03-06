#include <iostream>
using namespace std;

int kalkulator(float a, char op, float b){
    float hasil;
    if (op == '+'){
        hasil = a+b;
    }
    else if (op == '-'){
        hasil = a-b;
    }
    else if (op == '*'){
        hasil = a*b;
    }
    else if (op == '/'){
        hasil = a/b;
    }
    return hasil;
}


int main(){
    float a,b;
    char op,tanya;
    do{
    cout << "Input a: " ; cin >> a;
    cout << "Input operator: " ; cin >> op;
    cout << "Input b: " ; cin >> b; 
    cout << "Hasil: " <<  kalkulator(a,op,b) << endl;
    cout << "Hitung lagi?[y/t] : " ; cin >> tanya; 
    }
    while(tanya=='y');
}