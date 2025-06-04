#include <iostream>
using namespace std;

// Prosedur
void tampilkanPesan() {
    cout << "Halo, ini adalah prosedur!" << endl;
}

// Fungsi
int kali(int a, int b) {
    return a * b;
}

int main() {
    tampilkanPesan(); // Memanggil prosedur

    int hasil = kali(4, 5); // Memanggil fungsi
    cout << "Hasil perkalian: " << hasil << endl;

    return 0;
}
