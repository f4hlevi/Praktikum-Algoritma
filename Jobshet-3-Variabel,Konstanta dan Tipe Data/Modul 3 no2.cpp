// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main(){
	double k,f,r,c;
	
	printf("\n\tMengkonversikan suhu\n");
	printf("\t======================\n");
	
	printf("\nInputkan suhu (celcius): ");
	scanf("%lf",&c);
	
	k = c+273.15;
	f = c*1.8+32;
	r = c*0.8;
	
	printf("\n===========================\n");
	printf("Suhu dalam Kelvin: %0.2lf K\n",k);
	printf("Suhu dalam Fahrenheit: %0.2lf F\n",f);
	printf("Suhu dalam Reamur: %0.2lf R\n",r);
	
	return 0;
	
}
