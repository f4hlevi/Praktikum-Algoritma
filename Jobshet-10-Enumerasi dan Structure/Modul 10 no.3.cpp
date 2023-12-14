// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char npm[20];
    char nama[50];
    char tgl_lahir[20];
    char alamat[50];
    char hp[20];
};

int main() {
    struct Mahasiswa data[100]; // Batasi data maksimal 100 mahasiswa
    int i = 0;
    char jawab;

    do {
        printf("NPM : ");
        scanf("%s", data[i].npm);
        
        printf("NAMA : ");
        getchar(); // membersihkan newline buffer
        fgets(data[i].nama, sizeof(data[i].nama), stdin);
        data[i].nama[strcspn(data[i].nama, "\n")] = 0; // menghapus newline character
        
        printf("TGL LAHIR (dd-mm-yyyy): ");
        scanf("%s", data[i].tgl_lahir);
        
        printf("ALAMAT : ");
        getchar(); // membersihkan newline buffer
        fgets(data[i].alamat, sizeof(data[i].alamat), stdin);
        data[i].alamat[strcspn(data[i].alamat, "\n")] = 0; // menghapus newline character
        
        printf("HP : ");
        scanf("%s", data[i].hp);
        
        i++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &jawab);
    } while (jawab == 'y' || jawab == 'Y');

    printf("\nData Mahasiswa:\n");
    for (int j = 0; j < i; j++) {
        printf("%s %s %s %s %s\n", data[j].npm, data[j].nama, data[j].tgl_lahir, data[j].alamat, data[j].hp);
    }

    return 0;
}
