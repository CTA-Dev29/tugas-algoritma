#include <iostream>
using namespace std;

class Bilangan {
private:
    int bulat;
    double nyata;

public:
    Bilangan();      // Konstruktor
    void info();     // Method untuk menampilkan data
};

// Definisi konstruktor
Bilangan::Bilangan() {
    cout << "\nKonstruktor dijalankan ... " << endl;
    
    // Mengatur nilai: pembulatan eksplisit
    bulat = static_cast<int>(5.2);  // atau langsung 5;
    nyata = 3.6;
}

// Definisi fungsi info
void Bilangan::info() {
    cout << "\nJenis Bilangan:\n";
    cout << " Bulat = " << bulat << endl;
    cout << " Nyata = " << nyata << endl;
}

int main() {
    Bilangan a;
    a.info();

    Bilangan b;
    b.info();

    return 0;
}

