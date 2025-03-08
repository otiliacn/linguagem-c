/* Todo restaurante, embora por lei não possa obrigar o 
   cliente a pagar, cobra 10% para o garçom. Fazer um 
   algoritmo que leia o valor gasto com despesas 
   realizadas em um restaurante e imprima o valor 
   total com a gorjeta.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	float valorGasto, dezp, valorTotal;
    printf("Digite o valor gasto: ");
    scanf("%f", &valorGasto);
    dezp = valorGasto * 0.10;
    valorTotal = valorGasto + dezp;
    printf("Valor gasto R$ %.2f", valorGasto);
    printf("\nGorjeta do garçom R$ %.2f", dezp);
    printf("\nValor Total a Pagar R$ %.2f", valorTotal);
}
