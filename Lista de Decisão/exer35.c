#include<stdio.h>
int main(){
	int codigo;
	printf("Entre com o codigo: ");
	scanf("%d", &codigo);
	if(codigo == 1)
		printf("Alimento n�o-perec�vel");
	else if(codigo == 2 || codigo == 3 || codigo == 4)
			printf("Alimento perec�vel");
		 else if(codigo == 5 || codigo == 6)
		 		printf("Vestu�rio");
		 	else if(codigo == 7)
		 			printf("Higiene Pessoal");
		 		else if (codigo >= 8&& codigo <= 15)
		 				printf("Limpeza e utens�lios dom�sticos");
		 			else
		 				printf("C�digo inv�lido");
}


