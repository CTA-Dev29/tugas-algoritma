#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char a[15];
    char b[15];

    cout<<"MAsukkan kata 1:";cin>>a;
    cout<<"MAsukkan kata 2:";cin>>b;
    
    if(strcmp(a,b) == 0){
        cout<<"kata 1 dan 2 sama"<<endl;
    }else{
        cout<<"kata 1 dan 2 tidak sama"<<endl;
    }
}
