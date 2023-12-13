#include <stdio.h>

int main(){
	int detik, jam, menit, sisa_detik;
	
	printf("Masukan jumlah waktu (detik): ");
	scanf("%d", &detik);
	
	jam = detik / 3600;
	sisa_detik = detik % 3600;
	menit = sisa_detik / 60;
	sisa_detik = sisa_detik % 60;
	
	printf("Hasil output: %d jam, %d menit, %d detik\n", jam, menit, sisa_detik);
	
	return 0;
}
