#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;       // deklarasi pointer
    p = &a;       // p menyimpan alamat dari a

    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << p << endl;
    cout << "Nilai yang ditunjuk p: " << *p << endl;

    return 0;
}
