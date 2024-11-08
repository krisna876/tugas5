#include <stdio.h>

int main() {
    int kode, harga;
    char jenis;

    // Input data
    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis); // spasi sebelum %c untuk menghindari masalah dengan input sebelumnya
    printf("Masukkan harga: ");
    scanf("%d", &harga);

    // Menentukan diskon berdasarkan jenis barang
    float diskon = 0;
    if (jenis == 'A' || jenis == 'a') {
        diskon = 10;
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 15;
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 20;
    } else {
        printf("Jenis tidak valid.\n");
        return 1;
    }

    // Menghitung harga setelah diskon
    float hargaSetelahDiskon = harga - (harga * diskon / 100);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon, hargaSetelahDiskon);

    return 0;
}

