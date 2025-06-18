#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Kerja {
public:
    char nik[10];
    char nama[25];
    int jam;
    double total;

    float lembur(int l);
};

// Definisi fungsi lembur
float Kerja::lembur(int l) {
    if (l > 40)
        return (l - 40) * 30000;
    else
        return 0;
}

int main() {
    int jumlahData;
    double grandTotal = 0;
    Kerja karyawan[15];

    cout << "Jumlah Data: ";
    cin >> jumlahData;

    for (int i = 0; i < jumlahData; i++) {
        cout << "\nData Ke-" << i + 1 << endl;
        cout << " NIK            : "; cin >> karyawan[i].nik;
        cout << " Nama Karyawan  : "; cin >> karyawan[i].nama;
        cout << " Jumlah Jam     : "; cin >> karyawan[i].jam;
    }

    // Output header tabel
    cout << "\n\nDaftar Gaji Mingguan - Karyawan Honorer\n";
    cout << "-------------------------------------------------------------\n";
    cout << left << setw(4) << "No" 
         << setw(10) << "NIK"
         << setw(20) << "Nama"
         << setw(10) << "Jam"
         << setw(10) << "Lembur"
         << setw(10) << "Total" << endl;
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < jumlahData; i++) {
        float lemburGaji = karyawan[i].lembur(karyawan[i].jam);
        karyawan[i].total = (40 * 20000) + lemburGaji;
        grandTotal += karyawan[i].total;

        cout << left << setw(4) << i + 1
             << setw(10) << karyawan[i].nik
             << setw(20) << karyawan[i].nama
             << setw(10) << karyawan[i].jam
             << setw(10) << lemburGaji
             << setw(10) << karyawan[i].total << endl;
    }

    cout << "-------------------------------------------------------------\n";
    cout << "Total Keseluruhan Gaji Karyawan: " << grandTotal << endl;

    return 0;
}

