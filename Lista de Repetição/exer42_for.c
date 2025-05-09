#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int i, C, F;
	for(F = 50; F <= 150; F++){
		C = (5-9)*(F-32);
		printf("\n%dºF equivale a %dºC", F, C);
	}
}

