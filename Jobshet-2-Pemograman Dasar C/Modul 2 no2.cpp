// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main(){
	char Nama[50],Prodi[50],Fakultas[50];
	int Nim;
	float Nilai_Praktikum,Nilai_UTS,Nilai_UAS,Nilai_Akhir;
	
	printf("Nama: \n");
	scanf("%s",&Nama);
	
	printf("Prodi: \n");
	scanf("%s",&Prodi);
	
	printf("Fakultas: \n");
	scanf("%s",&Fakultas);
	
	printf("Nim: \n");
	scanf("%d",&Nim);
	
	printf("Nilai Praktikum: \n");
	scanf("%f",&Nilai_Praktikum);
	
	printf("Nilai UTS: \n");
	scanf("%f",&Nilai_UTS);
	
	printf("Nilai UAS: \n");
	scanf("%f",&Nilai_UAS);
	
	Nilai_Akhir = 0.3 * Nilai_Praktikum + 0.3 * Nilai_UTS + 0,4 * Nilai_UAS;
	
	printf("Nama : %s\n",Nama);
	printf("Nim : %d\n",Nim);
	printf("Prodi : %s\n",Prodi);
	printf("Fakultas : %s\n",Fakultas);
	printf("Nilai Praktikum : %f\n",Nilai_Praktikum);
	printf("Nilai UTS : %f\n",Nilai_UTS);
	printf("Nilai UAS : %f\n",Nilai_UAS);
	printf("Nilai Akhir : %f\n",Nilai_Akhir);
	
	return 0;
	 
}
