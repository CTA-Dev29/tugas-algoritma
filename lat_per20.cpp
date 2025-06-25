#include <iostream>
using namespace std;

int main() {
    int A[3][5];

    cout << "Masukkan nilai untuk array A[3][5]:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nIsi array A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
