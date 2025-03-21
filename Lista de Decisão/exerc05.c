#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	printf("Digite um valor: ");
	scanf("%d", &valor);
	if (valor % 3 == 0){
		printf("%d � m�ltiplo de 3.", valor);
	}else{
		printf("%d n�o � m�ltiplo de 3.", valor);
	}
	return 0;
}
