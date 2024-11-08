#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    // Menghitung lama parkir
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    // Menghitung biaya parkir
    if (lamaParkir <= 2) {
        biaya = 2000;  // Biaya 2 jam pertama
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500;  // Biaya per jam berikutnya
    }

    // Menampilkan hasil
    printf("Lama parkir = %d jam, Biaya = %d\n", lamaParkir, biaya);

    return 0;
}

