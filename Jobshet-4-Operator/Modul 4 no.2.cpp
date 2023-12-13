#include <stdio.h>

int main() {
    char namaPembeli[50];
    char namaBarang[50];
    float hargaSatuan, totalHarga;
    int jumlahBarang;

    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hargaSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    totalHarga = hargaSatuan * jumlahBarang;

    printf("\n--- Struk Pembelian ---\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Satuan: %.2f\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Total Harga: %.2f\n", totalHarga);

    return 0;
}
