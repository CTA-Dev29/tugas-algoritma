#include <iostream>
using namespace std;

int main() {
    int i = 0;
     while ( i <= 10){
        i++;
        if (i == 5) {
            break;
        }
        
        cout<< i <<"+"<< i <<"="<<i+i<<endl;
    }
    return 0;
}
