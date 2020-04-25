// date 2020-04-26
/* mendefinisikan tipe variabel dan melakukan print. 
   ada tujuh tipe data:
   numerik  = int, float, double, 
   karakter = char, wchar_t, 
   logika   = bool, void */

// numeric

int    salary = 85000;
float  pi = 3.14;
double vol = 233.1498; // bisa lebih akurat dari float
double dist = 4E12; // sama dengan 4*10^12

// character

char test = 'h';
wchar_t test2 = L'ם'; // karakter hebrew

// boolean

bool condition = true;

// void adalah no value

/* membuat nilai konstan/konstanta agar tidak bisa diubah 
   dengan cara mendahuluinya menggunakan `const` atau
   dengan `#define` (dinamakan preprocessor directive) */

const int light_speed = 299792458;

/* selain itu ada modifier, 4 tipenya:
   signed, unsigned, short, long
   yang bisa dimodifikasi: int, double, char
   ada pula derived data type, contoh:
   arrays, pointers, function types, structures, dll. */
