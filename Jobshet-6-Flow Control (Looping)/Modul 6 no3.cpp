#include <stdio.h>

int main(){
	int rows = 5;
	int i, j, k =1;
	
	for (i = 1; i <= rows; i++){
		for (j = 1; j <= i; j++){
			printf("%d ",i * k);
			k++;
		}
		k = 1;
		printf("\n");
	}
	
	return 0;
}
