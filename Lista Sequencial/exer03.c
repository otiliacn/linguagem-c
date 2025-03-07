//Ler um número inteiro e mostrar seu sucessor e seu antecessor.
#include<stdio.h>
int main(){
	int num, ant, suc;
	printf("Digite um numero: ");
	scanf("%d", &num);
	ant = num - 1;
	suc = num + 1;
	printf("O sucessor de %d eh %d e seu antecessor eh %d", num, suc, ant);
	printf("\nO sucessor de %d eh %d", num, suc);
	printf("\nO antecessor de %d eh %d", num, ant);
}

