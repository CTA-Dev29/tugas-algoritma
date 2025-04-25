#include <iostream>
using namespace std;

int main() {
    int N, A;

    cout << "Masukkan nilai N: ";
    cin >> N;
    cout << "Masukkan nilai A: ";
    cin >> A;

    // Algoritma (a)
    if (A > 50) {
        N = N + 10 +10;
    }
    else{        
        N = N + 10;
    }

    // Output hasil
    cout << "Hasil N: " << N << endl;

    return 0;
}