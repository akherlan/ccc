// program ini mencetak angka mulai dari 1 sampai 10
// tetapi melewatkan 6 dan 9

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 6 || i == 9 ) {
            continue;
        }
        cout << i << "\t";
    }
    return 0;
}
