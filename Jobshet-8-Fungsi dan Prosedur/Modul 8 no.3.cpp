// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

double luas(double radius) {
	return 3.14 * radius * radius;
}

double keliling(double radius) {
	return 2 * 3.14 * radius;
}

int main(){
	double radius;
	
	printf("Masukan jari-jari lingkaran: ");
	scanf("%lf", &radius);
	
	double luasLingkaran = luas(radius);
	double kelilingLingkaran = keliling(radius);
	
	printf("Luas lingkaran: %lf\n", luasLingkaran);
	printf("Keliling lingkaran: %lf\n", kelilingLingkaran);
	
	return 0;
}
