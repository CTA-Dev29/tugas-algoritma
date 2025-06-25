#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Pegawai {
private:
    string nama;
    int jamKerja;
    int honorPerHari = 25000;
    int honorLemburPerJam = 1500;

public:
    Pegawai(string nama, int jamKerja) {
        this->nama = nama;
        this->jamKerja = jamKerja;
    }

    string getNama() const {
        return nama;
    }

    int getJamKerja() const {
        return jamKerja;
    }

    int getHonorHarian() const {
        return honorPerHari;
    }

    int getHonorLembur() const {
        if (jamKerja > 8)
            return (jamKerja - 8) * honorLemburPerJam;
        return 0;
    }

    int getTotalHonor() const {
        return honorPerHari + getHonorLembur();
    }
};

int main() {
    int jumlahPegawai;
    cout << "PT. Meriang Gembira\n";
    cout << "Jumlah Pegawai: ";
    cin >> jumlahPegawai;

    string tanggal;
    cout << "Tanggal Input: ";
    cin.ignore(); // membersihkan newline
    getline(cin, tanggal);

    vector<Pegawai> daftarPegawai;

    for (int i = 0; i < jumlahPegawai; ++i) {
        cout << "\nData Ke-" << (i + 1) << endl;
        string nama;
        int jam;

        cout << "Nama Pegawai: ";
        getline(cin, nama);
        cout << "Jumlah Jam Kerja: ";
        cin >> jam;
        cin.ignore(); // buang newline

        daftarPegawai.emplace_back(nama, jam);
    }

    // Output Laporan
    cout << "\n\nPT. Meriang Gembira\n";
    cout << "Tanggal: " << tanggal << "\n";
    cout << "==========================================================================\n";
    cout << setw(4) << "No." << setw(15) << "Nama"
         << setw(12) << "Jam Kerja"
         << setw(12) << "Honor"
         << setw(12) << "Lembur"
         << setw(12) << "Total" << "\n";
    cout << "==========================================================================\n";

    int totalSemua = 0;
    for (int i = 0; i < daftarPegawai.size(); ++i) {
        Pegawai p = daftarPegawai[i];
        cout << setw(4) << (i + 1)
             << setw(15) << p.getNama()
             << setw(12) << p.getJamKerja()
             << setw(12) << p.getHonorHarian()
             << setw(12) << p.getHonorLembur()
             << setw(12) << p.getTotalHonor() << "\n";

        totalSemua += p.getTotalHonor();
    }

    cout << "==========================================================================\n";
    cout << "Total Honor Pegawai Sebesar: Rp. " << totalSemua << "\n";

    return 0;
}
