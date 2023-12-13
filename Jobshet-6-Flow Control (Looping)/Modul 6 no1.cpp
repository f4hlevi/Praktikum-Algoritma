#include <stdio.h>

int main(){
	int i;
	
	printf("Deret Bilangan Genap\n");
	for (i = 0; i<= 50; i += 2) {
		printf("%d,",i);
	}
	
	printf("\nDeret bilangan ganjil:\n");
	for (i =1; i <= 50; i += 2) {
		printf("%d,",i);
	}
	
	return 0;
}
