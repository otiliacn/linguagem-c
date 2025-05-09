#include<stdio.h>
int main(){
	float a, f;
	int ano = 0;
	a = 1.50;
	f = 1.10;
	while(f < a){
		a = a + 0.02;
		f = f + 0.03;
		ano++;
		printf("Ano: %d - Anacleto: %.2f / Felisberto: %.2f\n", ano, a, f);
	}
	printf("Anos: %d", ano);
	
}
