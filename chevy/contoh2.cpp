#include <iostream>
#include <cstring>   // untuk strcpy
#include <conio.h>   // untuk getch (jika pakai Turbo C++)
using namespace std;

// Prototipe fungsi
void coment(char ket[30], int n);

int main()
{
    char lagi, c[30];
    int i;

atas:
    cout << "Masukkan nilai = ";
    cin >> i;

    coment(c, i); // memanggil fungsi
    cout << c;

    cout << "\n\nIngin input lagi [Y/T]: ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto atas;
    else
        getch();  // hanya untuk sistem yang mendukung conio.h

    return 0;
}

// Definisi fungsi
void coment(char ket[30], int n)
{
    int a = n % 2;

    if (a == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}

