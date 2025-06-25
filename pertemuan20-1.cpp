#include <iostream>   // Gunakan iostream standar modern
using namespace std;

// Enum untuk jenis keturunan
enum KETURUNAN { PUMA, TUTUL, SINGA, MACAN };

// Kelas dasar Predator
class Predator {
public:
    // Constructor
    Predator() : Usianya(10), Bobotnya(5) {}
    ~Predator() {}

    // Accessor
    int Umurnya() const { return Usianya; }
    void SetUmur(int Umur) { Usianya = Umur; }

    int Beratnya() const { return Bobotnya; }
    void SetBerat(int Berat) { Bobotnya = Berat; }

    // Method lainnya
    void Meraung() const { cout << "Meraung ... suara Predator!\n"; }
    void Tidur() const { cout << "ssshhh… Predator Tidur.\n"; }

protected:
    int Usianya;
    int Bobotnya;
};

// Kelas turunan Kucing_besar dari Predator
class Kucing_besar : public Predator {
public:
    // Constructor
    Kucing_besar() : Keturunannya(SINGA) {}
    ~Kucing_besar() {}

    // Accessor
    KETURUNAN DptKeturunan() const { return Keturunannya; }
    void SetKeturunan(KETURUNAN keturunan) { Keturunannya = keturunan; }

    // Method lainnya
    void Melompat() { cout << "Melompat ...\n"; }
    void Berburu() { cout << "Berburu ... ingin makan\n"; }

private:
    KETURUNAN Keturunannya;
};

// Fungsi utama
int main() {
    Kucing_besar Sibelang;
    Sibelang.Meraung();
    Sibelang.Berburu();

    cout << "Umur Raja Hutan adalah: " << Sibelang.Umurnya() << " Tahun Usianya\n";

    cin.get(); // Menunggu input sebelum keluar
    return 0;
}
