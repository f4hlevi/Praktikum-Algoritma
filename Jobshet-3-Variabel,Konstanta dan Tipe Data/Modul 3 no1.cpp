// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main(){
	double rupiah,nilai;
	const double dollar=14250;
	
	printf("\n\tMengkonversikan nilai mata uang rupiah ke dollar\n");
	printf("\t================================================\n");
	
	printf("\nInputkan nilai mata uang dalam rupiah: ");
	scanf("%lf",&rupiah);
	
	nilai=rupiah/dollar;
	
	printf("Nilai mata uang adalah: $%0.2lf",nilai);
	
	return 0;
}
