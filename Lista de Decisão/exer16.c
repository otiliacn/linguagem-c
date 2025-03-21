#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	// declarar variaveis
	float salBruto, valorPrest,calc;
	printf("Salário bruto: R$ ");
	scanf("%f", &salBruto);
	printf("Valor da prestação: R$ ");
	scanf("%f", &valorPrest);
	calc = salBruto * 0.3;
	if(valorPrest > calc){
		printf("Empréstimo não concedido");
	}else{
		printf("Empréstimo concedido.");
	}
}



