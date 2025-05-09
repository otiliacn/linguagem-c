/*3) Faça um programa que apresente a soma de todos os 
número inteiros até o número recebido pelo teclado.*/
#include<stdio.h>
int main(){
	int p, num, soma;
	printf("Digite um valor: ");
	scanf("%d", &num);
	soma = 0;
	for(p = 0; p <= num; p++){
		soma = soma + p;		
	}
	printf("\nA soma total eh %d", soma);
}
