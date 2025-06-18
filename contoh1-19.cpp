#include <iostream>
using namespace std;

void garis() {
    cout << "==============================\n";
}

class Siswa {
public:
    char nis[9];
    char nama[20];
    float nilai;
};

int main() {
    Siswa sekolah;

    garis();
    cout << "\n\tProgram Nilai Siswa\n";
    cout << "\t-------------------\n";
    cout << "Input NIS = ";
    cin >> sekolah.nis;
    cout << "Input Nama Siswa = ";
    cin >> sekolah.nama;
    cout << "Input Nilai Akhir = ";
    cin >> sekolah.nilai;

    // Membersihkan layar jika pakai sistem lama, tapi dinonaktifkan di sini
    // clrscr(); 

    garis();
    cout << "\n\tNilai Siswa\n";
    cout << "\t------------\n\n";
    cout << "NIS          = " << sekolah.nis << endl;
    cout << "Nama Siswa   = " << sekolah.nama << endl;
    cout << "Nilai Akhir  = " << sekolah.nilai << endl;
    garis();

    return 0;
}

