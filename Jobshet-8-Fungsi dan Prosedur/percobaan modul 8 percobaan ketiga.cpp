#include <stdio.h>

void say_hello(char name[]){
	printf("hello %s!\n", name);
}

int main(){
	say_hello("Dian");
	say_hello("petani");
	say_hello("kode");
}