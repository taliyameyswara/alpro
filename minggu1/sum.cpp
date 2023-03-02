#include <iostream>
using namespace std;

int main(){
    int x;
    int sum = 0;

    cout << "Input 0 untuk menjumlahkan" << endl;
    cout << "Input x: " ; cin >> x;
    while (x != 0)
    {   
        sum = sum + x;
        cout << "Input x: " ; cin >> x;

    }

    cout << "Jumlah: " << sum << endl;
}