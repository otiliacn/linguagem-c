/* 6) Fa�a um algoritmo que receba um n�mero 
e informe se ele � par ou �mpar. */
#include<stdio.h>
int main(){
	int num;
	printf("Digite um valor: ");
	scanf("%d", &num);
	if (num % 2 == 0){ // se for verdadeiro
		printf("%d eh par", num);
	}else{ // se for falso
		printf("%d eh impar", num);
	}	
	return 0;
}
/*
num = 10
se (10 % 2 == 0) --> 0 == 0
num 5
se (5 % 2 == 0) --> 1 == 0
