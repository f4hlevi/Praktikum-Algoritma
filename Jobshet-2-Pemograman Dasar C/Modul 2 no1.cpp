#include <stdio.h>

int main(){
	char nama[50];
	
	printf("Hello siapa nama lengkapmu\n");
	scanf("%[^\n]s", &nama);
	
	printf("Selamat Datang %s dalam pemograman", nama);
	
	
}
