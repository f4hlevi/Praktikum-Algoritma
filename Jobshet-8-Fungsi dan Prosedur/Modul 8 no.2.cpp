#include <stdio.h>

float tambah(float a, float b){
	return a + b;
}

float kurang(float a, float b){
	return a - b;
	}

float kali(float a, float b){
	return a * b;
}

float bagi(float a, float b){
	if (b !=0){
		return a / b;
	} else {
		printf("Pembagian oleh nil tidak diperbolehkan.\n");
		return 0;
	}
}

int main(){
	float angka1, angka2;
	printf("Masukan angka pertama: ");
	scanf("%f", &angka1);
	printf("Masukan angka kedua: ");
	scanf("%f", &angka2);
	
	printf("Hasil penjumlahan: %.2f\n", tambah(angka1, angka2));
	printf("Hasil Pengurangan: %.2f\n", kurang(angka1, angka2));
	printf("Hasil perkalian: %.2f\n", kali(angka1, angka2));
	printf("Hasil pembagian: %.2f\n", bagi(angka1, angka2));
	
	return 0;
}
