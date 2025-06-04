#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int *n = arr;

    for (int i = 0; i < 5; i++) {
        cout << "Element array ke-"<< i << ":"<<*(n + i)<< endl;
    }

    return 0;
}
