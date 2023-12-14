// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char hasil_kelulusan;

    // Masukkan nilai kehadiran, tugas, UTS, dan UAS
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    // Hitung nilai akhir
    nilai_akhir = 0.2 * nilai_kehadiran + 0.2 * nilai_tugas + 0.25 * nilai_uts + 0.35 * nilai_uas;

    // Tentukan hasil kelulusan
    if (nilai_akhir >= 91) {
        hasil_kelulusan = 'A';
    } else if (nilai_akhir >= 86) {
        hasil_kelulusan = 'A';
    } else if (nilai_akhir >= 81) {
        hasil_kelulusan = 'A';
    } else if (nilai_akhir >= 76) {
        hasil_kelulusan = 'B';
    } else if (nilai_akhir >= 66) {
        hasil_kelulusan = 'B';
    } else if (nilai_akhir >= 56) {
        hasil_kelulusan = 'C';
    } else if (nilai_akhir >= 45) {
        hasil_kelulusan = 'D';
    } else {
        hasil_kelulusan = 'E';
    }

    // Tampilkan nilai akhir dan hasil kelulusan
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    switch (hasil_kelulusan) {
        case 'A':
            printf("Selamat! Anda lulus dengan nilai yang memuaskan!\n");
            break;
        case 'B':
            printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
            break;
        case 'C':
            printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
            break;
        case 'D':
            printf("Maaf, anda tidak lulus!\n");
            break;
        case 'E':
            printf("Maaf, anda tidak lulus!\n");
            break;
    }

    return 0;
}
