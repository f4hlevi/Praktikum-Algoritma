#include <stdio.h>

int main() {
    float nilai_presentasi = 85;
    float nilai_praktek = 65;
    float nilai_uts = 80;
    float nilai_uas = 75;
    
    float nilai_akhir = (nilai_presentasi * 0.10) + (nilai_praktek * 0.20) + (nilai_uts * 0.30) + (nilai_uas * 0.40);
    
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    
    return 0;
}
