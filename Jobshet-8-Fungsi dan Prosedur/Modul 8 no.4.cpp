#include <stdio.h>

float potong(float total_pembelian) {
	float diskon = 0;
	
	if (total_pembelian > 1000000 && total_pembelian < 3000000){
		diskon = total_pembelian *0.20;
	} else if (total_pembelian >= 3000000){
		diskon = total_pembelian *0.35;
	}
	
	return diskon;
}

int main(){
	printf("===PROGRAM HITUNG POTONGAN===\n");
	
	float total_pembelian;
	printf("Total Pembelian (Rp): ");
	scanf("%f", &total_pembelian);
	
	float diskon = potong(total_pembelian);
	float total_harus_dibayar = total_pembelian - diskon;
	
	printf("Besar diskon: Rp %.2f\n", diskon);
	printf("Besar yang harus dibayar: Rp %.2f\n", total_harus_dibayar);
	
	return 0;
}
