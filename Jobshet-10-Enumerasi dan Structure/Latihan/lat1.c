// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	enum hari sekarang;
	sekarang = RABU;
	printf("sekarang hari ke-%d", sekarang+1);
}
