#include <stdio.h>

int main() {
    int nilai[20];
    int total = 0;
    float rata_rata;

    for (int i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i];
    }

    rata_rata = (float)total / 20;

    printf("Rata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}
