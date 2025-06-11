#include <iostream>
using namespace std;

// Prototipe fungsi
void tambah(int *c, int *d);

int main()
{
    int a = 4, b = 6;

    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    tambah(&a, &b);
    cout << "\n\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    return 0;
}

// Fungsi dengan parameter pointer (Call by Reference)
void tambah(int *c, int *d)
{
    *c += 7;
    *d += 5;

    cout << "\n\nNilai di Akhir Fungsi tambah()";
    cout << "\nc = " << *c << " d = " << *d;
}

