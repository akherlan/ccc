// Program untuk mencari faktorial menggunakan kondisi (while)

#include <iostream>
using namespace std;

int main() {
    // nilai awal (initial setup)
    int number, i = 1, factorial = 1;

    cout << "Masukkan bilangan positif: ";
    cin >> number;

    // cek kondisi, apakah negatif?
    while (number < 0) {
        cout << "Nilai yang Anda masukkan bukan bilangan positif." << endl;
        cout << "Silakan masukkan bilangan positif: ";
        cin >> number;
    }

    // operasi
    while (i <= number) {
        factorial *= i; // factorial = factorial * i;
        ++i;
    }

    // tunjukkan hasil
    cout << "Nilai " << number << "!" << " adalah: " << factorial;
    return 0;
}
