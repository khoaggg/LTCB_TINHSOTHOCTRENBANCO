#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int soO, sothoc = 0;
    cout << "nhap so 0 : "; cin >> soO;
    for (int i = 1; i <= soO; i++) {
        cout << "o so " << "co so thoc la" << pow(2, i) << endl;
            
        sothoc += pow(2, i);
    }

   
    cout << "tong so thoc chua trong" << soO << "la" << sothoc << "hat\n";
    return 0;

}8

