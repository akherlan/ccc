// Program mencetak angka positif yang diberikan oleh user
// Jika user memasukkan angka negatif, maka akan dilewati

#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Masukkan sebuah angka (integer): ";
  cin >> number;

  // periksa apakah angkanya positif atau bukan
  if (number > 0) {
    cout << "Anda memasukkan sebuah angka positif: " << number << endl;
  }

  // jika tanpa else maupun else if, program tetap bisa berfungsi
  // jika pernyataan bernilai salah, tanpa else if, akan loncat ke perintah berikutnya
  else if (number < 0) {
    cout << "Anda memasukkan sebuah angka negatif: " << number << endl;
  }
  else if (number == 0) {
    cout << "Anda memasukkan angka nol." << endl;
  }
  else {
    // bagian ini tidak akan terjadi karena variabel number sudah didefinisikan sbg int
    // yang terjadi, masih dianggap nol
    cout << "Nilai yang Anda masukkan bukan sebuah angka." << endl;
  }

  // perintah berikut akan langsung dijalankan jika if bernilai salah dan tidak ada else
  cout << "Program selesai.";
  return 0;
}
