#include <iostream>
using namespace std;

// Kelas satu_kandang dengan enkapsulasi
class satu_kandang {
private:
    int kandang; // Properti disembunyikan (encapsulated)

public:
    void atur(int nilai);  // Mutator (setter)
    int hasil();            // Aksesor (getter)
};

// Implementasi fungsi anggota
void satu_kandang::atur(int nilai) {
    kandang = nilai;
}

int satu_kandang::hasil() {
    return kandang;
}

// Fungsi utama
int main() {
    satu_kandang ayam1, ayam2, ayam3;
    int bebek;

    ayam1.atur(5);
    ayam2.atur(7);
    ayam3.atur(2);
    bebek = 20;

    // Output nilai
    cout << "Nilai dari ayam1 adalah " << ayam1.hasil() << endl;
    cout << "Nilai dari ayam2 adalah " << ayam2.hasil() << endl;
    cout << "Nilai dari ayam3 adalah " << ayam3.hasil() << endl;
    cout << "Nilai dari bebek adalah " << bebek << endl;

    cin.get(); // Menunggu input sebelum keluar
    return 0;
}
