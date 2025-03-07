#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");	
	// declaração das variáveis
	int a;
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("O valor digitado é: %d", a);
}


