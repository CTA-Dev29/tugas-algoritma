#include <iostream>
#define pi 3.14

using namespace std;

class Tabung {
private:
    int j, t;     // jari-jari dan tinggi
    float v, k;   // volume dan keliling

public:
    Tabung();         // Konstruktor
    void keluaran();  // Fungsi untuk menampilkan hasil
};

// Definisi konstruktor
Tabung::Tabung() {
    cout << "\nMenghitung Tabung" << endl;
    cout << "-----------------" << endl << endl;

    cout << "Masukkan Jari-jari = ";
    cin >> j;
    cout << "Masukkan Tinggi = ";
    cin >> t;

    v = pi * j * j * t;
    k = 2 * pi * j + 2 * t;  // Misalnya keliling total sisi-sisi (persepsi umum)
}

// Definisi fungsi keluaran
void Tabung::keluaran() {
    cout << endl;
    cout << "Volume Tabung = " << v << endl;
    cout << "Keliling Tabung = " << k << endl;
}

int main() {
    Tabung s;
    s.keluaran();
    return 0;
}

