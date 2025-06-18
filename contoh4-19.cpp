#include <iostream>
#include <cstring> // untuk strcpy
using namespace std;

class Motor {
private:
    char* merk;
    float cc_mesin;
    long harga;

public:
    // Konstruktor
    Motor(const char* nama, float cc, long hrg);

    // Destruktor
    ~Motor();

    // Fungsi untuk menampilkan informasi
    void keterangan();
};

// Definisi konstruktor
Motor::Motor(const char* nama, float cc, long hrg) {
    merk = new char[strlen(nama) + 1]; // alokasi sesuai panjang nama
    strcpy(merk, nama);
    cc_mesin = cc;
    harga = hrg;
}

// Definisi destruktor
Motor::~Motor() {
    delete[] merk; // hapus alokasi memori
}

// Fungsi menampilkan informasi motor
void Motor::keterangan() {
    cout << "\nInformasi Motor:\n";
    cout << " Merk       = " << merk << endl;
    cout << " CC Mesin   = " << cc_mesin << endl;
    cout << " Harga      = " << harga << endl << endl;
}

int main() {
    Motor sport("Honda CBR", 500, 30500000);
    Motor matic("Honda Vario", 125, 14500000);

    sport.keterangan();
    matic.keterangan();

    return 0;
}

