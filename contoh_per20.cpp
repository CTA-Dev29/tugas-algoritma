#include <iostream>
using namespace std;

int main() {
    // Dengan jumlah elemen baris = 3 dan jumlah kolom = 2
    int matrika[3][2];
    int matrikb[3][2];
    int matrikc[3][2];

    // Indeks perulangan
    int i, j;

    cout << "\n\tPenjumlahan Array 2 Dimensi (Matrik)\n\n";

    // Input nilai untuk matrik A dan B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << "matrik A [" << i << "][" << j << "] = ";
            cin >> matrika[i][j];

            cout << "matrik B [" << i << "][" << j << "] = ";
            cin >> matrikb[i][j];
        }
    }

    // Penjumlahan array A dan B → simpan ke array C
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            matrikc[i][j] = matrika[i][j] + matrikb[i][j];
        }
    }

    // Menampilkan matrik A
    cout << "\nMatrik A:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << matrika[i][j] << " ";
        }
        cout << endl;
    }

    // Menampilkan matrik B
    cout << "\nMatrik B:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << matrikb[i][j] << " ";
        }
        cout << endl;
    }

    // Menampilkan matrik C (hasil penjumlahan)
    cout << "\nMatrik C (Hasil Penjumlahan):\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << matrikc[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
