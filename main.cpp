#include <iostream>
#include "binary.cpp"
using namespace std;

int main(int argc, char *argv[]) {
    boolean bol(8);
    cout << "===========================================================" << endl;
    cout << "\Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;
    for(int i=0;i<8;i++){
        bol.bitOn(i);
    }
    bol.bitOff(4);
    for(int i=7;i>=0;i--){
        cout<<bol[i];
    }
    bol.clear();
    cout<<endl;
    for(int i=7;i>=0;i--){
        cout<<bol[i];
    }
    bol.~boolean();

    return 0;
}

