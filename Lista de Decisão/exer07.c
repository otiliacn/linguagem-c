/*7 ) Fa�a um algoritmo que receba um n�mero e 
informe se ele � divis�vel por 7.  */
#include<stdio.h>
int main(){
	int num;
	printf("Digite um valor: ");
	scanf("%d", &num);
	if (num % 7 == 0){ // se for verdadeiro
		printf("%d eh divisivel", num);
	}else{ // se for falso
		printf("%d nao eh divisivel", num);
	}	
	return 0;
}

