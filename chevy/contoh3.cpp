#include <iostream>
using namespace std;

// Prototipe fungsi
void tambah(int m, int n);

int main()
{
    int a = 5, b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b;

    tambah(a, b);

    cout << "\nNilai Setelah Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b;

    return 0;
}

// Definisi fungsi (Call by Value)
void tambah(int m, int n)
{
    m += 5;
    n += 7;

    cout << "\n\nNilai di dalam Fungsi tambah()";
    cout << "\nm = " << m << " n = " << n << endl;
}

