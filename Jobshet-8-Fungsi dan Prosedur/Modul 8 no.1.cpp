// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>
int multiply(int a, int b){
	if (a == 0 || b == 0){
		return 0;
	}
	if (a == 1){
		return b;
	}
	if (a == 1){
		return a;
	}
	return a + multiply(a, b - 1);
}
int main(){
	int a = 12;
	int b = 6;
	int result = multiply(a, b);
	printf("%d x %d =%d\n", a, b, result);
	return 0;
}
