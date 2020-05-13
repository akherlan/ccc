// Program untuk menjumlahkan angka sampai user memasukkan nilai 0

#include <iostream>
using namespace std;

int main() {
    float number, sum = 0.0;

    cout << "Program ini akan menjumlah setiap nilai yang Anda masukkan" << endl;
    cout << "sampai Anda memasukkan nilai yang program inginkan." << endl << endl;
    cout << "Tebak angka berapakah itu?" << endl;

    // tes
    while (true) {
        cout << "Masukkan sebuah angka: ";
        cin >> number;

        if (number != 0.0) {
            sum +=number;
        }
        else {
            // hentikan kalau angka yang dimasukkan adalah nol
            break;
        }
    }
    cout << "Jumlah angka yang sudah Anda masukkan adalah " << sum << endl;
    return 0;
}
