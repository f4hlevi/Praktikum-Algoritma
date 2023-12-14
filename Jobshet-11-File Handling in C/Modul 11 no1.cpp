// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("File tidak dapat dibuat atau diakses.");
        return 1;
    }

    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        char nama[50], nim[15], jurusan[50], programStudi[50];

        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        scanf("%s", nama);
        printf("NIM: ");
        scanf("%s", nim);
        printf("Jurusan: ");
        scanf("%s", jurusan);
        printf("Program Studi: ");
        scanf("%s", programStudi);

        fprintf(file, "Data mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", programStudi);
    }

    fclose(file);
    printf("Data mahasiswa telah disimpan dalam datamahasiswa.txt\n");
    return 0;
}
