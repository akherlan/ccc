// Program untuk mencari faktorial menggunakan pengulangan (loop)

#include <iostream>
using namespace std;

int main() {
    int i, n, factorial = 1;

    cout << "Masukkan bilangan (integer) positif: ";
    cin >> n;

    // (initializationStatement; testExpression; updateStatement)
    for (i = 1; i <= n; ++i) {
        factorial *= i; // factorial = factorial * i
    }

    cout << "Faktorial dari " << n << " adalah " << factorial;
    return 0;
}
