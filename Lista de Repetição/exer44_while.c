#include<stdio.h>
int main(){
	float a, b;
	int ano;
	ano = 0;
	a = 90000000;
	b = 200000000;
	while(a <= b){
		a = a * 1.03;
		b = b * 1.015;
		ano++;
		printf("Ano: %d - Pop A: %.1f / Pop B: %.1f\n", ano, a, b);
	}
	printf("\nQuantidade de anos: %d", ano);
}
