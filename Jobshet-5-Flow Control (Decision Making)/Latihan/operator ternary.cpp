//created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main(){
	
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7)? "Benar" : "Salah");

	return 0 ;
}
