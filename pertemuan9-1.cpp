#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input panjang sisi segitiga
    cout << "Masukkan panjang sisi pertama: ";
    cin >> a;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> b;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> c;

    if (a + b > c && b + c > a && c + a > b) {
        cout << "SEGITIGA" << endl;  
    } else {
        cout << "BUKAN SEGITIGA" << endl;  
    }

    return 0;
}