#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[2], b[2], temp = -1;
    char pil;

ulang:
    temp = -1;
    // Memasukkan jumlah baris dan kolom
    for (char u = 'A'; u <= 'B'; u++) {
        temp++;
        cout << "\nMasukkan jumlah baris matriks " << u << ": ";
        cin >> a[temp];
        cout << "Masukkan jumlah kolom matriks " << u << ": ";
        cin >> b[temp];
    }

    // Cek validitas ukuran untuk perkalian
    if (b[0] == a[1]) {
        cout << "\nUkuran valid. Melanjutkan perhitungan perkalian matriks...\n";

        int AA[a[0]][b[0]];
        int BB[a[1]][b[1]];
        int hasil[a[0]][b[1]];

        // Input data matriks A
        cout << "\nMasukkan data matriks A\n";
        for (int i = 0; i < a[0]; i++) {
            for (int j = 0; j < b[0]; j++) {
                cout << "A[" << i << "][" << j << "] = ";
                cin >> AA[i][j];
            }
        }

        // Input data matriks B
        cout << "\nMasukkan data matriks B\n";
        for (int i = 0; i < a[1]; i++) {
            for (int j = 0; j < b[1]; j++) {
                cout << "B[" << i << "][" << j << "] = ";
                cin >> BB[i][j];
            }
        }

        // Proses perhitungan perkalian matriks A x B → simpan di hasil[][]
        for (int i = 0; i < a[0]; i++) {
            for (int j = 0; j < b[1]; j++) {
                hasil[i][j] = 0;
                for (int k = 0; k < b[0]; k++) {
                    hasil[i][j] += AA[i][k] * BB[k][j];
                }
            }
        }

        // Menampilkan hasil perkalian
        cout << "\nHasil Perkalian Matriks A dan B adalah:\n";
        for (int i = 0; i < a[0]; i++) {
            for (int j = 0; j < b[1]; j++) {
                cout << setw(6) << hasil[i][j] << " ";
            }
            cout << endl;
        }

    } else {
        // Jika ukuran tidak valid
        cout << "\nKolom matriks A harus sama dengan baris matriks B!\n";
        cout << "Ulangi? (Y/N): ";
        cin >> pil;
        if (pil == 'Y' || pil == 'y') {
            goto ulang;
        }
    }

    return 0;
}
