#include <stdio.h>

int main() {
    double total_pembelian, diskon, cashback;

    printf("Masukkan total pembelian (Rp): ");
    scanf("%lf", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    double total_bayar = total_pembelian - diskon + cashback;

    printf("Total Pembelian: Rp %.2lf\n", total_pembelian);
    printf("Diskon: Rp %.2lf\n", diskon);
    printf("Cashback: Rp %.2lf\n", cashback);
    printf("Total Bayar: Rp %.2lf\n", total_bayar);

    return 0;
}
