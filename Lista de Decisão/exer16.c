#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	// declarar variaveis
	float salBruto, valorPrest,calc;
	printf("Sal�rio bruto: R$ ");
	scanf("%f", &salBruto);
	printf("Valor da presta��o: R$ ");
	scanf("%f", &valorPrest);
	calc = salBruto * 0.3;
	if(valorPrest > calc){
		printf("Empr�stimo n�o concedido");
	}else{
		printf("Empr�stimo concedido.");
	}
}



