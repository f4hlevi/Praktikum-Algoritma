#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tebakan, nomorKomputer, percobaan = 0;
    char pilihan;

    do {
        srand(time(0));
        nomorKomputer = rand() % 20 + 1; // Menghasilkan nomor acak antara 1 dan 20

        printf("Tebak nomor antara 1 dan 20: ");
        scanf("%d", &tebakan);

        while (tebakan != nomorKomputer) {
            percobaan++;

            if (tebakan < nomorKomputer) {
                printf("Nomor saya lebih besar!\n");
            } else {
                printf("Nomor saya lebih kecil!\n");
            }

            printf("Tebak lagi: ");
            scanf("%d", &tebakan);
        }

        percobaan++;
        printf("Selamat, Anda benar! Jumlah percobaan: %d\n", percobaan);

        printf("Mau bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}
