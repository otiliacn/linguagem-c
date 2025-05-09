/* 41)Tem-se um conjunto de dados, contendo a altura e o sexo 
(masculino e feminino) de 50 pessoas.
Fazer um algoritmo que calcule e escreva:
a) A maior e a menor altura do grupo;
b) A média de altura das mulheres;
c) O número de homens.*/
#include<stdio.h>
int main(){
	int i, sex, nHom, nMul;
	float alt, totMulAlt, mediaMulheres;
	nHom = 0; 
	nMul = 0;
	totMulAlt = 0;
	for(i = 1; i <= 3; i++){
		printf("Digite a altura: ");
		scanf("%f", &alt);
		printf("Digite o sexo [0 - F / 1 - M]: ");
		scanf("%d", &sex);
		if(sex == 1){
			nHom = nHom + 1;
		}else if(sex == 0){ // A média de altura das mulheres;
			nMul = nMul + 1;
			totMulAlt = totMulAlt + alt;
		}else{
			printf("Sexo inválido!");
		}
	}
	mediaMulheres = totMulAlt / nMul;
	printf("O número de homens = %d", nHom);
	printf("A média de altura das mulheres = %.2f", mediaMulheres);
//	printf("total de altura das mulheres = %f", totMulAlt);
}

