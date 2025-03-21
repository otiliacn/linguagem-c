#include<stdio.h>
int main(){
	int prato, p, sobremesa, s, bebidas, b, calorias;
	printf(">>> Pratos <<< \n1 - Vegetariano \n2 - Peixe \n3 - Frango \n4 - Carne \nEscolha a opcao: ");
	scanf("%d", &prato);
	if(prato == 1){
		p = 180;
	}else if(prato == 2){
		p = 230;
	}else if(prato == 3){
		p = 250;
	}else if(prato == 4){
		p = 350;
	}else{
		printf("\nEscolha Invalida.");
		p = 0;
	}
	printf("\n\n>>>Sobremesa <<<\n1 - Abacaxi \n2 - Sorvete diet \n3 - Mousse diet \n4 - Mousse chocolate \nEscolha a opcao: ");
	scanf("%d", &sobremesa);
	if(sobremesa == 1){
 		s = 180;
	}else if(sobremesa == 2){
		s = 110;
	}else if(sobremesa == 3){
		s = 170;
	}else if(sobremesa == 4){
		s = 200;
	}else{
		printf("Escolha Invalida.");
		s = 0;
	}
	printf("\n\n>>>Bebidas <<<\n1 - Cha \n2 - Suco de laranja \n3 - Suco de melão \n4 - Refrigerante diet \nEscolha a opcao: ");
	scanf("%d", &bebidas);
	if(bebidas == 1){
		b = 20;
	}else if(bebidas == 2){
		b = 70;
	}else if(bebidas == 3){
		b = 100;
	}else if(bebidas == 4){
		b = 65;
	}else{
		printf("Escolha Invalida.");
		b = 0;
	}	
	calorias = p + s + b;
	printf("\nTotal de calorias: %dcal", calorias);
	return 0;
}
