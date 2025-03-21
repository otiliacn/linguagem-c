#include<stdio.h>
int main(){
	int codigo;
	printf("Entre com o codigo: ");
	scanf("%d", &codigo);
	if(codigo == 1)
		printf("Alimento não-perecível");
	else if(codigo <= 4)
			printf("Alimento perecível");
		 else if(codigo <= 6)
		 		printf("Vestuário");
		 	else if(codigo == 7)
		 			printf("Higiene Pessoal");
		 		else if (codigo <= 15)
		 				printf("Limpeza e utensílios domésticos");
		 			else
		 				printf("Código inválido");
}