#include <iostream>
using namespace std;

int main() {

    float number, sum = 0.0;

    cout << "Program ini akan menjumlah setiap nilai yang Anda masukkan" << endl;
    cout << "sampai Anda memasukkan nilai yang program inginkan." << endl << endl;
    cout << "Tebak angka berapakah itu?" << endl;

    do {
        cout << "Masukkan sebuah angka: ";
        cin >> number;
        sum += number;
    }
    while (number != 0);
    cout << "Total angka yang Anda masukkan = " << sum;
    return 0;
}
