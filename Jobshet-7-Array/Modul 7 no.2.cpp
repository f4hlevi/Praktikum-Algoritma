// created by Fajri Alhidra Fahlevi, nim: 233430620
#include <stdio.h>

int main() {
    int jumlahSiswa;

    printf("Input banyak siswa: ");
    scanf("%d", &jumlahSiswa);

    // Deklarasi array untuk nama mahasiswa
    char namaMahasiswa[jumlahSiswa][100];

    // Meminta input nama mahasiswa sebanyak jumlahSiswa
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan nama mahasiswa
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
