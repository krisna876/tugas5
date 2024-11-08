#include <iostream>
using namespace std;

int main() {
    int jamMasuk, jamKeluar, lamaBekerja;

    // Input jam masuk dan jam keluar
    cout << "Masukkan jam masuk (1-12): ";
    cin >> jamMasuk;
    cout << "Masukkan jam keluar (1-12): ";
    cin >> jamKeluar;

    // Cek apakah jam keluar lebih kecil dari jam masuk
    if (jamKeluar >= jamMasuk) {
        lamaBekerja = jamKeluar - jamMasuk;
    } else {
        lamaBekerja = (12 - jamMasuk) + jamKeluar;
    }

    // Menampilkan hasil
    cout << "Lama bekerja " << lamaBekerja << " jam" << endl;

    return 0;
}

