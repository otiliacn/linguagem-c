#include<stdio.h>
int main(){
	int p, num, soma;
	printf("Digite um valor: ");
	scanf("%d", &num);
	soma = 0;
	p = 0;
	do{
		soma = soma + p;
		p++;		
	}while(p <= num);
	printf("\nA soma total eh %d", soma);
}
