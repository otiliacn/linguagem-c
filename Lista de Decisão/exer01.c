/* 1) Receba dois números pelo teclado, 
some os dois. Se o resultado for maior que 10 
mostre a soma no vídeo. */
#include<stdio.h>
int main(){
	// declarar as variaveis
	int n1, n2, res;
	// entrada de dados
	printf("Entre com um valor: ");
	scanf("%d", &n1);
	printf("Entre com outro valor: ");
	scanf("%d", &n2);
	res = n1 + n2;
	// decisão
	if (res >= 10){
		printf("A soma eh %d", res);
	}	
	return 0;
}
