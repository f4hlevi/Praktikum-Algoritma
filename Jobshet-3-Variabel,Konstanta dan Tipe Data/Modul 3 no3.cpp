#include <stdio.h>

int main(){
	const double phi=3.14;
	double r,l,v;
	
	printf("\n\tMenghitung volume dan luas permukaan bola basket\n");
	printf("\t==================================================\n");
	
	printf("\nInputkan jari jari bola: ");
	scanf("%lf",&r);
	
	l = 4*phi*r*r;
	v = 4*phi*r*r/3;
	
	printf("\n=============================\n");
	printf("Luas permukaan bola adalah: %0.2lfcm2\n",l);
	printf("Volume bola adalah: %0.2lfcm3\n",v);
	
	return 0;
	
	
}
