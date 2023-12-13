#include <stdio.h>

int main(){
	int saldo = 175000;
	const int saldomin = 50000;
	int menu,setor,tarik;
	
	printf("\nNo Rek	: 0123");
	printf("\nNama Akun	: Hatori");
	printf("\nSaldo ATM	: Rp. %d\n",saldo);
	
	do{
		printf("\nATM\n");
		printf("1.Cek Saldo\n");
		printf("2.Setoran\n");
		printf("3.Penarikan Tunai\n");
		printf("4.Exit\n");
		printf("Masukan pilihan (1/2/3/4): ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("Saldo Anda: Rp. %d\n",saldo);
				break;
			case 2:
				printf("Masukan jumlah setoran: Rp. ");
				scanf("%d",setor);
				saldo += setor;
				printf("Setoran berhasil, saldo anda sekarang: Rp. %d\n",saldo);
				break;
			case 3:
				printf("Masukan jumlah penarikan: Rp. ");
				scanf("%d",&tarik);
				if(saldo - tarik >= saldomin){
					saldo -= tarik;
					printf("Penarikan berhasil, saldo anda sekarang: Rp. %d",saldo);
				}
				else{
					printf("Sldo minimal tidak terpenuhi. Penarikan gagal");
				}
				break;
			case 4:
				printf("Terima kasih. Sampai jumpa lagi\n");
				break;
			default:
			printf("Pilihan tidak valid. Silahkan coba lagi");
		}
	}
	while (menu !=4);
	
	return 0;
}
