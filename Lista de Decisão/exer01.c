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
	// decis�o
	if (res >= 10){
		printf("A soma eh %d", res);
	}	
	return 0;
}
