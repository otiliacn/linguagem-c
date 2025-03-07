/* Ler dois números inteiros e mostrar. */
#include<stdio.h>
int main(){
	// declarar as variaveis
	int a, b;
	// leitura
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	// apresentação
	printf("O primeiro numero digitado foi %d", a);
	printf("\nO segundo numero digitado foi %d", b);
	
	printf("\nOs valores digitados foram %d e %d", a, b);
}

