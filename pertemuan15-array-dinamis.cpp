#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> angka;

    // Menambahkan elemen ke dalam array
    angka.push_back(100);
    angka.push_back(200);
    angka.push_back(300);

    // Menampilkan isi array
    for (int i = 0; i < angka.size(); i++) {
        cout << "angka[" << i << "] = " << angka[i] << endl;
    }

    return 0;
}
