/*3) Fa�a um programa que apresente a soma de todos os 
n�mero inteiros at� o n�mero recebido pelo teclado.*/
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
