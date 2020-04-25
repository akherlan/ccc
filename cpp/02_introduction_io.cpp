// date 2020-04-26
#include <iostream>
using namespace std;

int main() {
  // print string menggunakan tanda petik ganda
  // print dengan objek cout dan operator << 
  cout << "Saya sedang belajar program C++" << endl; 
  // endl adalah endline sama dengan \n newline
  // di akhir selalu gunakan tanda ;
  cout << "BAB OUTPUT\n";
  
  int num1 = 70;
  double num2 = 259.536;
  char ch = 'A';
  
  cout << "integer: " << num1 << endl; // print integer
  cout << "double: " << num2 << endl;  // print double
  cout << "character: " << ch << endl; // print char
  
  cout << "BAB INPUT\n";
  int num;
  cout << "Masukkan integer: ";
  cin >> num; // mengambil input
  cout << "Nilai yang dimasukkan adalah: " << num << endl;
  
  return 0; // exit status
}

// cara lain tanpa `using namespace std;` tapi pakai std::cout