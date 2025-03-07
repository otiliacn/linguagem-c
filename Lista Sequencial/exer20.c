/* Ler dois valores para as variáveis A e B, 
   efetuar a troca dos valores de forma que 
   a variável A passe a possuir o valor da 
   variável B e que B passe a possuir o valor 
   da variável A apresentar os valores trocados.*/
#include<stdio.h>
int main(){
	int a, b, t;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	t = a;
	a = b;
	b = t;
	printf("o valor de a = %d e o valor de b = %d", a, b);
}

