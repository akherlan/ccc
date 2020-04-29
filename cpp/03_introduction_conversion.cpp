// konversi dari double ke integer

#include <iostream>
using namespace std;

int main() {
    // mendefinisikan double ke variabel num_double
    double num_double = 9.999;
    // declare tipe variabel integer
    int num_int;
    // konversi tipe pertama: implisit
    // masukkan nilai num_int ke num_double
    num_int = num_double;

    cout << "hasil konversi implisit dari double " << num_double << endl;
    cout << "menjadi integer " << num_int << endl;

    // C-style type casting

    int exp_num_int;
    double exp_num_double = 14.76;
    exp_num_int = int(exp_num_double);

    cout << "konversi explisit dari double " << exp_num_double << endl;
    cout << "menjadi integer dengan tipe_data(variabel) = " << int(exp_num_int) << endl;
    cout << "atau bisa juga dengan (tipe_data)variabel = " << (int)exp_num_int << endl;

    return 0;
}
