#include<stdio.h>
int main (){
	float peso, altura, imc;
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite o peso: ");
	scanf("%f", &peso);
	imc = peso / (altura * altura);
	printf("O valor do IMC eh %.2f", imc);
	if(imc < 20){ 
		printf("\nFaixa de risco: Abaixo do peso.");
	}else if(imc <= 25){ 
		printf("\nFaixa de risco: Normal.");
	}else if(imc <= 30){ 
		printf("\nFaixa de risco: Excesso de peso.")
	}else if(imc <= 35){
		printf("\nFaixa de risco: Obesidade.");
	}else{
		printf("\nFaixa de risco: Obesidade Mórbida.");
	}
	return 0;
}
