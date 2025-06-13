#include <iostream>
using namespace std;

// Konstanta honor
const int HONOR_HARIAN = 15000;
const int UPAH_LEMBUR_PER_JAM = 5000;

// Fungsi untuk menghitung honor
int hitungHonor(int jamKerja) {
    if (jamKerja > 8) {
        int jamLembur = jamKerja - 8;
        return HONOR_HARIAN + (jamLembur * UPAH_LEMBUR_PER_JAM);
    } else {
        return HONOR_HARIAN;
    }
}

int main() {
    int jumlahPegawai;

    cout << "Masukkan jumlah pegawai honorer: ";
    cin >> jumlahPegawai;

    // Array untuk menyimpan jam kerja dan honor
    int jamKerja[jumlahPegawai];
    int honor[jumlahPegawai];

    // Input dan proses per pegawai
    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;
        cout << "Masukkan jumlah jam kerja: ";
        cin >> jamKerja[i];

        honor[i] = hitungHonor(jamKerja[i]);
    }

    // Menampilkan hasil
    cout << "\n=== RINCIAN HONOR PEGAWAI ===\n";
    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "Pegawai ke-" << i + 1 << ": "
             << "Jam kerja = " << jamKerja[i]
             << ", Honor = Rp. " << honor[i] << endl;
    }

    return 0;
}
