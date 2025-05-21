#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout<< i <<"+"<< i <<"="<<i+i<<endl;
        if (i == 5) {
            break;
        }
    }
    return 0;
}
