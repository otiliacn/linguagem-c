#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");	
	// declara��o das vari�veis
	int a;
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("O valor digitado �: %d", a);
}


