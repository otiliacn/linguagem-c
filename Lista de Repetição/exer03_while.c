#include<stdio.h>
int main(){
	int p, num, soma;
	printf("Digite um valor: ");
	scanf("%d", &num);
	soma = 0;
	p = 0;
	while(p <= num){
		soma = soma + p;
		p++;		
	}
	printf("\nA soma total eh %d", soma);
}
