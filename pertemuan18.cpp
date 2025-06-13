#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main() {
    Mahasiswa mhs1;

    // Mengisi data
    mhs1.nama = "Chevy Tafsir Alamsycah";
    mhs1.umur = 23;
    mhs1.jurusan = "Teknik Informatika";

    // Menampilkan data
    cout << "Nama    : " << mhs1.nama << endl;
    cout << "Umur    : " << mhs1.umur << endl;
    cout << "Jurusan : " << mhs1.jurusan << endl;

    return 0;
}
