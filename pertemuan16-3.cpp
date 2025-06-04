#include <iostream>
using namespace std;

int main() {
    int *n = new int;
    *n = 10;

        cout << "Nilai yang ditunjuk oleh pointer: "<<*n<< endl;
    delete n;

    return 0;
}
