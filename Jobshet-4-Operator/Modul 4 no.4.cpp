// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main() {
    int durasi_sewa = 3; 
    int tarif_pertama = 15000; 
    float tarif_berikutnya = tarif_pertama * 0.5; 
    
    int total_biaya;
    
    if (durasi_sewa >= 1) {
        total_biaya = tarif_pertama + (tarif_berikutnya * (durasi_sewa - 1));
    } else {
        printf("Durasi sewa harus minimal 1 jam.\n");
        return 1;
    }
    
    printf("Total biaya sewa film selama %d jam adalah: Rp %d\n", durasi_sewa, total_biaya);
    
    return 0;
}
