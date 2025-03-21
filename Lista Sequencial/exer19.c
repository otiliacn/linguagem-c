#include<stdio.h>
int main(){
	// declarar as variaveis
	int a, b, aux;
	printf("Entre com o valor de a: ");
	scanf("%d", &a);
	printf("Entre com o valor de b: ");
	scanf("%d", &b);
	aux = a; 
	a = b; 
	b = aux; 
	printf("O valor de a = %d e o valor de b = %d", a, b);
	
	return 0;
}
