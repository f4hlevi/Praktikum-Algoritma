#include <stdio.h>

int main() {
    char pilihan;
    double luas = 0;
    
    printf("Pilih bentuk geometri:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'a':
        case 'A':
            {
                double jariJari;
                printf("Masukkan jari-jari bola: ");
                scanf("%lf", &jariJari);
                luas = 4 * 3.14159265 * jariJari * jariJari;
                break;
            }
        case 'b':
        case 'B':
            {
                double sisi;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%lf", &sisi);
                luas = 6 * sisi * sisi;
                break;
            }
        case 'c':
        case 'C':
            {
                double panjang, lebar, tinggi;
                printf("Masukkan panjang balok: ");
                scanf("%lf", &panjang);
                printf("Masukkan lebar balok: ");
                scanf("%lf", &lebar);
                printf("Masukkan tinggi balok: ");
                scanf("%lf", &tinggi);
                luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                break;
            }
        case 'd':
        case 'D':
            {
                double jariJariTabung, tinggiTabung;
                printf("Masukkan jari-jari tabung: ");
                scanf("%lf", &jariJariTabung);
                printf("Masukkan tinggi tabung: ");
                scanf("%lf", &tinggiTabung);
                luas = 2 * 3.14159265 * jariJariTabung * (jariJariTabung + tinggiTabung);
                break;
            }
        default:
            printf("Pilihan tidak valid.\n");
            return 1;
    }

    printf("Luas permukaan adalah: %.2lf\n", luas);

    return 0;
}
