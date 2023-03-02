#include <iostream>
using namespace std;

int kalkulator(float a, char op, float b){
    int hasil;
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
    char op;
    cout << "Input a: " ; cin >> a;
    cout << "Input operator: " ; cin >> op;
    cout << "Input b: " ; cin >> b; 
    cout << "Hasil: " <<  kalkulator(a,op,b) << endl;
}