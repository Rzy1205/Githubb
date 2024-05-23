#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, alamat;
    int tahunLahir, tahunSekarang;

    // Meminta masukan nama
    cout << "Masukkan Nama: ";
    getline(cin, nama);

    // Meminta masukan alamat
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);

    // Meminta masukan tahun lahir
    cout << "Masukkan Tahun Lahir: ";
    cin >> tahunLahir;

    // Meminta masukan tahun sekarang
    cout << "Masukkan Tahun Sekarang: ";
    cin >> tahunSekarang;

    // Menghitung usia
    int usia = tahunSekarang - tahunLahir;

    // Menampilkan hasil
    cout << "\n========================================\n";
    cout << "Nama: " << nama << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Usia: " << usia << " tahun" << endl;
    cout << "========================================\n";

    return 0;
}

