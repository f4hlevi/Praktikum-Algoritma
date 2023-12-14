// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main(){
	int panjang_alas,tinggi,luas;
	
	printf("Panjang Alas: ");
	scanf("%d",&panjang_alas);
	
	printf("Tinggi: ");
	scanf("%d",&tinggi);
	
	luas = panjang_alas * tinggi / 2;
	
	printf("Luas Segitiga Adalah : %d\n",luas);
	
	return 0;
	
	
}
