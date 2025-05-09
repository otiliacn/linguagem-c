/*2) Faça o algoritmo definido acima apresentar 
somente os números pares.*/
#include<stdio.h>
int main(){
	int p, num;
	printf("Digite um valor: ");
	scanf("%d", &num);
	for(p = 0; p <= num; p++){
		if(p % 2 == 0){
			printf("\n %d", p);
		}
	}	
}
