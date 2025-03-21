#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	// declarar as variáveis
	float n1, n2, n3, n4, media, novaMedia, exame;
	// passo 1: ler 4 notas
	printf("Digite a 1ª nota: ");
	scanf("%f", &n1); 
	printf("Digite a 2ª nota: ");
	scanf("%f", &n2);
	printf("Digite a 3ª nota: ");
	scanf("%f", &n3);
	printf("Digite a 4ª nota: ");
	scanf("%f", &n4);
	// passo 2: calcular media
	media = (n1 + n2 + n3 + n4) / 4.0;
	// passo 3 - decisão
	if (media < 3) 
		printf("Reprovado");
	else if (media >= 5)
		printf("Aprovado direto");
	else if (media >= 3 && media < 5){
			printf("Digite nota de exame final: ");
			scanf("%f", &exame);
			novaMedia = (media + exame) / 2.0;
			if(novaMedia >= 5)
				printf("Aprovado");
			else
				printf("Reprovado no exame");
		}
	return 0;
	
}

