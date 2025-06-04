#include <iostream>
using namespace std;

int main() {
    int *arr;
    int n;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    arr = new int[n]; // alokasi memori dinamis

    // Mengisi array
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    // Menampilkan isi array
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // membebaskan memori
    return 0;
}
