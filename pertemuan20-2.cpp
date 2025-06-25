#include <iostream>
using namespace std;

// Kelas dasar
class HewanPeliharaan {
public:
    virtual void lucu() {
        cout << "Lucunya hewan peliharaan" << endl;
    }

    virtual void makan() {
        cout << "Makan... dibutuhkan hewan peliharaan" << endl;
    }

    virtual ~HewanPeliharaan() {} // Destructor virtual untuk polymorphism
};

// Kelas turunan Jinak
class Jinak : public HewanPeliharaan {
public:
    void lucu() override {
        cout << "Lucu dan Jinak" << endl;
    }

    void makan() override {
        cout << "Diberi makan agar jinak" << endl;
    }
};

// Kelas turunan Kucing dari Jinak
class Kucing : public Jinak {
public:
    void lucu() override {
        cout << "Lucunya kucing" << endl;
    }

    void makan() override {
        cout << "Makanan dibutuhkan Kucing" << endl;
    }
};

// Fungsi utama
int main() {
    // Definisi objek
    Jinak jinak;
    Kucing puma;

    // Pointer ke kelas dasar
    HewanPeliharaan* hewan;

    // Polymorphism: menunjuk ke objek Jinak
    hewan = &jinak;
    hewan->lucu();  // Akan panggil Jinak::lucu (karena override)
    hewan->makan(); // Akan panggil Jinak::makan

    cout << "-----------------------------" << endl;

    // Polymorphism: menunjuk ke objek Kucing
    hewan = &puma;
    hewan->lucu();  // Akan panggil Kucing::lucu
    hewan->makan(); // Akan panggil Kucing::makan

    cin.get(); // Menunggu input sebelum keluar
    return 0;
}
