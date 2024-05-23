#include <iostream>
 using namespace std;
 int main() {
 int jumlah_bintang;
 cout << "Masukkan jumlah bintang: ";
 cin >> jumlah_bintang;
 if (jumlah_bintang < 0) {
 cout << "Jumlah bintang harus lebih besar dari 0." << endl;
 } else {
 for (int i = 0; i < 5; i++) {
 // Mencetak spasi sebanyak i karakter
 for (int k = 0; k < i; k++) {
 cout << " ";
 }
 
 // Mencetak bintang-bintang
 for (int j = 0; j < jumlah_bintang; j++) {
 cout << "* ";
 }
 cout << endl; // Pindah ke baris berikutnya
 }
 }
 return 0;
}
